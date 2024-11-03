/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 13:09:20 by teddybandam       #+#    #+#             */
/*   Updated: 2024/11/03 11:04:58 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>

class Base
{
    public: 
        virtual ~Base();
    public:
    private: 
        class A; class B; class C;
};
Base *generate(void);
void identify(Base* p);
void identify(Base& p);


#endif 