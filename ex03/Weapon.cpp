/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbez--du <tbez--du@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 12:48:44 by tbez--du          #+#    #+#             */
/*   Updated: 2026/04/07 13:00:02 by tbez--du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type )
{
	this->type = type;
}

const std::string& Weapon::getType( void ) const
{
	return this->type;
}

void Weapon::setType( std::string type )
{
	this->type = type;
}
