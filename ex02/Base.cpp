/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teddybandama <teddybandama@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 13:09:15 by teddybandam       #+#    #+#             */
/*   Updated: 2024/11/03 07:48:53 by teddybandam      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base(){}

Base *Base::generate(void)
{
    
    //return ?;
}

void Base::identify(Base* p)
{
}
void Base::identify(Base& p)
{
    BASE& dynamic_cast<BASE&> (P);
}