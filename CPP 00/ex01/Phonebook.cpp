/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 14:24:17 by lduheron          #+#    #+#             */
/*   Updated: 2023/07/03 16:09:25 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

// prendre en compte le controle D
// valgrind.

PhoneBook::PhoneBook(void)
{
    std::cout << "Constructor PhoneBook called" << std::endl;
    return ;
}

PhoneBook::~PhoneBook(void)
{
    std::cout << "Destructor PhoneBook called" << std::endl;
    return ;
}
