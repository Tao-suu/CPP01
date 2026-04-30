/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbez--du <tbez--du@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 11:23:38 by tbez--du          #+#    #+#             */
/*   Updated: 2026/04/07 12:22:37 by tbez--du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Zombie{
public:
	Zombie( std::string name );
	Zombie( void );
	~Zombie();

	void		announce( void );
	void		set_name( std::string name );

private:
	std::string	name;
};

Zombie	*zombieHorde( int N, std::string name );
