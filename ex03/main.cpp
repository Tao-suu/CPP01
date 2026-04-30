/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbez--du <tbez--du@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 12:45:11 by tbez--du          #+#    #+#             */
/*   Updated: 2026/04/30 13:36:12 by tbez--du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

int	main( void )
{
	{
		std::cout << "HumanA" << std::endl;
		Weapon		club = Weapon("piti truc tout rikiki");

		HumanA		bob("Bob", club);
		bob.attack();
		club.setType("mega truc");
		bob.attack();
	}
	{
		std::cout << std::endl << "HumanB" << std::endl;
		Weapon		club = Weapon("little thing");

		HumanB		jim("Jim");
		jim.attack();
		jim.setWeapon(club);
		jim.attack();
		club.setType("thick engine");
		jim.attack();
	}

	return (0);
}
