/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:01:14 by tebandam          #+#    #+#             */
/*   Updated: 2024/10/31 19:08:39 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(void)
{
	std::cout << std::endl;
	std::cout << "======== Test for value in char =======" << std::endl;
	std::cout << std::endl;
	ScalarConverter::is_char('c');
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "======== Test for value in int =======" << std::endl;
	std::cout << std::endl;
	ScalarConverter::is_int(12);
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "======== Test for value in float =======" << std::endl;
	std::cout << std::endl;
	ScalarConverter::is_float(12);
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "======== Test for value in double =======" << std::endl;
	std::cout << std::endl;
	ScalarConverter::is_double(2.5);
	std::cout << std::endl;
	std::cout << std::endl;
	// void	is_nan();

}

//     ❌ double 2.5- To do

// Value in char : Impossible.
// Value in int : 2.
// Value in float : 2.5f.
// Value in double : 2.5.


	//ScalarConverter converter;
	// if (argc != 2)
	// {
	// 	std::cerr << "Wrong number arguments" << std::endl;
	// 	return (1);
	// }
	//ScalarConverter::convert(argv[1]);


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