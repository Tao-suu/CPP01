/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbez--du <tbez--du@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 19:33:58 by tbez--du          #+#    #+#             */
/*   Updated: 2026/04/30 13:29:11 by tbez--du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon)
	: weapon(weapon), name(name)
{

}

HumanA::HumanA( Weapon &weapon )
	: weapon(weapon)
{
	this->name = "anyone";
}

void HumanA::attack( void )
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

HumanA::~HumanA( void )
{

}
