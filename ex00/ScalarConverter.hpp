/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:13:01 by tebandam          #+#    #+#             */
/*   Updated: 2024/10/30 17:03:45 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCARLARCONVERTER_HPP
# define SCARLARCONVERTER_HPP

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
	
	public:
		void	is_char(char c);

};

#endif 