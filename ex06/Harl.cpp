/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbez--du <tbez--du@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 22:03:28 by tbez--du          #+#    #+#             */
/*   Updated: 2026/05/02 19:38:03 by tbez--du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void )
{
	this->levels[0] = "DEBUG";
	this->levels[1] = "INFO";
	this->levels[2] = "WARNING";
	this->levels[3] = "ERROR";
}

void Harl::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl << std::endl;
}

void Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}

void Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl << std::endl;
}

void Harl::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

void Harl::none( void )
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void Harl::complain( std::string level )
{
	int		value = -1;

	for (int i = 0; i < 4; i++)
		if (this->levels[i] == level)
		{ value = i; break ; }

	switch (value)
	{
		case 0:
			this->debug();
			__attribute__((fallthrough));
		case 1:
			this->info(); 
			__attribute__((fallthrough));
		case 2:
			this->warning(); 
			__attribute__((fallthrough));
		case 3:
			this->error(); 
			break ;
		default:
			this->none(); 
			break ;
	}
}
