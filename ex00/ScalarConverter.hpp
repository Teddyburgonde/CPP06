/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:13:01 by tebandam          #+#    #+#             */
/*   Updated: 2024/11/10 14:40:39 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCARLARCONVERTER_HPP
# define SCARLARCONVERTER_HPP

# define INT_MAX 2147483647
# define INT_MIN -2147483648

#include <iostream>
#include <cstdlib>

class ScalarConverter
{
	public: /* Destructor */
		~ScalarConverter();

	public: /* Method convert */
		static void convert(std::string const &input);
	
	public: /* Method type */
		static bool is_char(std::string const &input);
		static bool is_int(std::string const &input);
		static bool is_float(std::string const &input);
		static bool is_double(std::string const &input);

	public: /*Display methods*/
		static void	display_char_message(char c);
		static void	display_int_message(long int nb);
		static void	display_float_message(float f);
		static void	display_double_message(double d);
		static void	display_nan_message();
		static void display_p_inf_message();
		static void display_n_inf_message();

	private: /* Canonical form not instanciable */
		ScalarConverter();
		ScalarConverter(ScalarConverter const &cpy);
		ScalarConverter const &operator=(ScalarConverter const &rhs);
};

#endif 