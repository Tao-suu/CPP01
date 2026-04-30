/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbez--du <tbez--du@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 13:46:53 by tbez--du          #+#    #+#             */
/*   Updated: 2026/04/30 18:55:52 by tbez--du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>


void	print_usage( void )
{
	std::cerr << "./replace <file> <s1> <s2>" << std::endl;
	std::cerr << "\tfile: file you wanna sed" << std::endl;
	std::cerr << "\ts1 & s2: change any occurence of s1 for s2" << std::endl;
}

std::string	replace(std::string s, std::string s1, std::string s2)
{
	size_t	pos			=	s.find(s1);

	std::string	before	=	s.substr(0, pos);
	std::string	after	=	s.substr(pos + s1.length());
	return	before + s2 + after;
}

int		iter(char **argv)
{
	std::ifstream	in(argv[1]);
	if (!in.is_open())
	{
		std::cerr << "Cannot open file" << std::endl;
		return (0);
	}

	std::string		out_name(argv[1]);
	out_name += ".replace";

	std::ofstream	out;
	out.open(out_name.c_str());
	if (out.fail())
	{
		std::cerr << "Cannot open file: " << argv[1] << ".replace" << std::endl;
		return (0);
	}

	while (!in.eof())
	{
		std::string	line;
		std::getline(in, line);
		if (line.empty())
			continue ;

		while (line.find(argv[2]) != std::string::npos)
			line = replace(line, std::string(argv[2]), std::string(argv[3]));
		out << line << std::endl;
	}

	in.close();
	out.close();
	return (1);
}

int		main(int argc, char **argv)
{
	if (argc != 4)
	{
		print_usage();
		return (1);
	}
	if (!std::string(argv[2]).length())
	{
		std::cerr << "s1 cannot be empty" << std::endl; 
		return (1);
	}
	iter(argv);
}
