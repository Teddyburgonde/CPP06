/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:01:14 by tebandam          #+#    #+#             */
/*   Updated: 2024/11/01 13:14:58 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong arguments" << std::endl;
		return 1;
	}
	ScalarConverter::convert(argv[1]);
	
}

/*
./convert 0
char: Non displayable
int: 0
float: 0.0f
double: 0.0
./convert nan
char: impossible
int: impossible
float: nanf
double: nan
./convert 42.0f
char: '*'
int: 42
float: 42.0f
double: 42.0
*/