/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerga <mguerga@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 10:34:44 by mguerga           #+#    #+#             */
/*   Updated: 2024/02/13 17:25:35 by mguerga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <iostream>

// cdc Coplien

ShrubberyCreationForm::ShrubberyCreationForm(void)
{
	this->setFName("Undefined ShrubberyCreationForm");
	this->setSGrade(145);
	this->setEGrade(137);
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
{
	std::string fname = target;

	this->setTarget(target);
	this->setFName(fname.append("'s ShrubberyCreationForm"));
	this->setSGrade(145);
	this->setEGrade(137);
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string form_name, std::string target)
{
	this->setTarget(target);
	this->setFName(form_name);
	this->setSGrade(145);
	this->setEGrade(137);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

// member func

void ShrubberyCreationForm::action(void) const
{
	std::string file_name = this->getTarget();
	file_name.append("_Shrubbery");

	std::fstream ofs (file_name.c_str(), std::fstream::app);
	ofs << "MMMMMMMMMMMMMMMWWWMWXkdl:;,';lddo::cloOXWMMMMMMMMM" << std::endl; 
	ofs << "MMMMMMMMN0kkO0KXXOdl;..'...''.....''...;dKWMMMMMMM" << std::endl;
	ofs << "MMMMWX0xc,'''',;;''.'''''''''''.,cloodddx0NMMMMMMM" << std::endl;
	ofs << "MMMNxc;,;:,''..'''''ld;;:,;;::,.dX0kxxxddkOKNWWWMM" << std::endl;
	ofs << "WMMWXKKKkl;''..','.:0XdkXKKXN0;.;:,'''''''';l0WWMM" << std::endl;
	ofs << "WMMMW0OOkxO0Oc';okd,cKxlXWWWWKl.,c;''''';lx0KNWWMM" << std::endl;
	ofs << "MWKdc,'',;oKWNOo:;;..od;xX0kdxo.;k:.;dOOXN0kxdxkOX" << std::endl;
	ofs << "MNl....''',oXMMWNOc..,;,,;,'''''',.;ONKOkl,''',lkX" << std::endl;
	ofs << "MWKOkxxdxo:lONWWMWXl...';cccc,....,xko;'''''';dKWM" << std::endl;
	ofs << "WWMWNXXXNWXxccldO0K0:..'okKNNO,...,l;,,'.,:::oxxkO" << std::endl;
	ofs << "N0dlc:;;:oooddc'.',;,.....:KWNl...lXX0o',c:,'...':" << std::endl;
	ofs << "c'.....';oxdllc:;:;'.......oKk,...dNOc,,,:ooldxxOX" << std::endl;
	ofs << "xdxxddxOXWMMMWNNNWN0xl;.....'.....;:..:oONWWMMMMMM" << std::endl;
	ofs << "MMMMMMMMMMWMMMMMMMMWWWXo...........,lkXWWMMMMMMMMM" << std::endl;
	ofs << "MMMMMMMMMMMMMMMMMMMMWMMXo;'......'oXWWMMMMMMMMMMMM" << std::endl;
	ofs << "MMMMMMMMMMMMMMMMMMMMMMMMNXO:.....:KWMMMMMMMMMMMMMM" << std::endl;
	ofs << "MMMMMMMMMMMMMMMMMMMMMMMMMMWXl'...oNMMMMMMMMMMMMMMM" << std::endl;
	ofs << "MMMMMMMMMMMMMMMMMMMMMMMWWWWXx,...:kOKNWMMMMMMMMMMM" << std::endl;
	ofs << "MMMMMMMMMMMMMMMMMMWXKOxoolc;'...''',;:lodOXWMMMMMM" << std::endl;
	ofs << "MMMMMMMMMMMMMMMMMWOl;,'',',,,,,,;,,;;;;;;:dKWMMMMM" << std::endl;

	ofs.close();
}
