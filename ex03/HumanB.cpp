/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbez--du <tbez--du@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 13:23:20 by tbez--du          #+#    #+#             */
/*   Updated: 2026/04/30 13:35:04 by tbez--du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name )
{
	this->name = name;
	this->weapon = NULL;
}

HumanB::~HumanB()
{

}

void	HumanB::setWeapon( Weapon &weapon )
{
	this->weapon = &weapon;
}

void	HumanB::attack( void )
{
	if ( weapon )
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " attacks with nothing ~ pathetic" << std::endl;
}
