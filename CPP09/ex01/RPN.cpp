/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:41:33 by mguerga           #+#    #+#             */
/*   Updated: 2024/02/26 16:04:55 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool RPN::pushope(std::string seg)
{
	std::string ope("+-*/");
	int val = ope.find(seg) + 1;
	if ((val < 1 || val > 4) || seg.size() != 1)
		throw ExceptInputErr();
	this->stacktemp.push(INT_MIN + val);
	return true;
}
	

RPN::RPN(std::string input)
{
	std::string segment;
	std::istringstream iss(input);
	while (iss >> segment)
	{
		if (segment.size() == 1 && segment.find_first_not_of("0123456789") == std::string::npos)
			stacktemp.push(atoi(segment.c_str()));
		else
		   pushope(segment);
	}
	int ratio[2] = {0, 0};
	int i = stacktemp.size();
	while (stacktemp.empty() == false && i-- != INT_MAX)
	{
		if (stacktemp.top() < 10 && stacktemp.top() >= 0)
			ratio[0]++;
		else
		{
			if (i < 2)
				throw ExceptInputErr();
			ratio[1]++;
		}
		stack.push(stacktemp.top());
		stacktemp.pop();
	}
	if (ratio[0] != ratio[1] + 1 || (ratio[0] + ratio[1]) % 2 == 0)
		throw ExceptInputErr();
}

float RPN::calc(void)
{
	int vec[3];

	while (stack.size() != 1)
	{
		while (stack.size() >= 3)
		{
			vec[0] = this->stack.top();
			this->stack.pop();
			vec[1] = this->stack.top();
			this->stack.pop();
			vec[2] = this->stack.top();
			this->stack.pop();
			while (!(vec[2] < INT_MIN + 5 && vec[2] > INT_MIN && vec[0] > INT_MIN + 5 && vec[1] > INT_MIN + 5))
			{
				if (stack.empty() == true)
					break;
				stacktemp.push(vec[0]);
				vec[0] = vec[1];
				vec[1] = vec[2];
				vec[2] = stack.top();
				this->stack.pop();
			}
			if (vec[2] < INT_MIN + 5 && vec[2] > INT_MIN && vec[0] > INT_MIN + 5 && vec[1] > INT_MIN + 5)
				stacktemp.push(eval(vec));
			else if (stack.size() < 3)
			{
				stacktemp.push(vec[0]);
				stacktemp.push(vec[1]);
				stacktemp.push(vec[2]);
			}
		}
		while (stack.empty() == false)
		{
			stacktemp.push(stack.top());
			stack.pop();
		}
		while (stacktemp.empty() == false)
		{
			stack.push(stacktemp.top());
			stacktemp.pop();
		}
	}
	return stack.top();
}

int RPN::eval(int vec[3])
{
	switch (vec[2])
	{
		case INT_MIN + 1:
			return (vec[0] + vec[1]);
		case INT_MIN + 2:
			return (vec[0] - vec[1]);
		case INT_MIN + 3:
			return (vec[0] * vec[1]);
		case INT_MIN + 4:
		{
			if (vec[1] == 0)
				throw ExceptDivisionZero();
			return (vec[0] / vec[1]);
		}
		default:
			return 0;
	}
	return 0;
}

RPN::~RPN(void)
{}

RPN::RPN(const RPN& o)
{
	*this = o;
}

RPN& RPN::operator= (const RPN& o)
{
	this->stack = o.stack;
	this->stacktemp = o.stacktemp;
	return *this;
}
