/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 00:00:57 by mguerga           #+#    #+#             */
/*   Updated: 2024/02/06 01:23:05 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(void)
{
	Base *b = Base::generate();
	Base *d = Base::generate(); 
	
	Base::identify(b);
	Base::identify(*d);
	delete b;
}
