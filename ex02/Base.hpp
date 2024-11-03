/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teddybandama <teddybandama@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 13:09:20 by teddybandam       #+#    #+#             */
/*   Updated: 2024/11/03 07:37:27 by teddybandam      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP


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