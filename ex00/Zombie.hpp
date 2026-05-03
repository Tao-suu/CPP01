/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbez--du <tbez--du@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 11:23:38 by tbez--du          #+#    #+#             */
/*   Updated: 2026/05/03 02:03:54 by tbez--du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Zombie{
public:
	Zombie( std::string name );
	~Zombie();

	void		announce( void );

private:
	std::string	name;
};

Zombie	*newZombie( std::string name );
void	randomChump( std::string name );
