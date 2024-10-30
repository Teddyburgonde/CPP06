/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:13:01 by tebandam          #+#    #+#             */
/*   Updated: 2024/10/30 18:05:24 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCARLARCONVERTER_HPP
# define SCARLARCONVERTER_HPP

# define INT_MAX 2147483647
# define INT_MIN -2147483648

#include <iostream>
#include <stdlib.h>

class ScalarConverter
{
	public: /*canonical form*/
		ScalarConverter();
		ScalarConverter(ScalarConverter const &cpy);
		ScalarConverter const &operator=(ScalarConverter const &rhs);
		~ScalarConverter();

	public: /*method*/
		static void convert(std::string const &literal);
	
	private:
		void	is_char(char c);
		void	is_int(long int nb);
		void	is_nan();

};

#endif 