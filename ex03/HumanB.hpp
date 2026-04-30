/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbez--du <tbez--du@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 19:30:22 by tbez--du          #+#    #+#             */
/*   Updated: 2026/04/30 13:24:31 by tbez--du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB
{
public:
	HumanB( std::string name );
	~HumanB();
	void setWeapon( Weapon &weapon );
	void attack();

private:
	Weapon		*weapon;
	std::string name;
};
