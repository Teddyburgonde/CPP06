/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:13:01 by tebandam          #+#    #+#             */
/*   Updated: 2024/10/31 19:16:19 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCARLARCONVERTER_HPP
# define SCARLARCONVERTER_HPP

# define INT_MAX 2147483647
# define INT_MIN -2147483648

#include <iostream>

class ScalarConverter
{
	public: /*canonical form*/
		ScalarConverter();
		ScalarConverter(ScalarConverter const &cpy);
		ScalarConverter const &operator=(ScalarConverter const &rhs);
		~ScalarConverter();

	public: /*method*/
		static void convert(std::string const &literal);
	
	public:
		static void	is_char(char c);
		static void	is_int(long int nb);
		static void	is_nan();
		static void	is_float(float f);
		static void	is_double(double d);

};

#endif 