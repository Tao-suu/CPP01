/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbez--du <tbez--du@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 12:12:18 by tbez--du          #+#    #+#             */
/*   Updated: 2026/04/07 12:30:52 by tbez--du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{

	std::cout << "Creation d'un zombie nomme michel sur la stack" << std::endl;
	Zombie	michel("michel");

	std::cout << "Creation d'un zombie nomme patrick sur la heap" << std::endl;
	Zombie	*patrick = new Zombie("patrick");
	std::cout << "Destruction de patrick" << std::endl << std::endl;
	delete patrick;

	std::cout << "Creation d'une horde de 10 zombie tous nomme pierre" << std::endl;
	Zombie	*horde = zombieHorde(10, "Pierre");
	for (int i = 0; i < 10; i++)
		horde[i].announce();
	std::cout << "Destruction de la horde" << std::endl << std::endl;
	delete[] horde;
	std::cout << std::endl;

	return (0);
}
