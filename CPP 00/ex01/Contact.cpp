/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:52:46 by lduheron          #+#    #+#             */
/*   Updated: 2023/07/04 17:52:55 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

 void Contact::GetInfo( void ) {
    // while (this->FirstName.empty())
    // {
        std::cout << "\rFirst name : ";
        std::getline(std::cin,this->FirstName);
    // }
    std::cout << "Last name : ";
    std::getline(std::cin, this->LastName);

    std::cout << "Nickname : ";
    std::getline(std::cin, this->Nickname);

    std::cout << "Phone number : ";
    std::getline(std::cin, this->PhoneNumber);

    std::cout << "What's your darkest secret ? : ";
    std::getline(std::cin, this->DarkestSecret);

    // if ()
}

Contact::Contact(void)
{
    // std::cout << "Constructor called" << std::endl;
    return ;
}

Contact::~Contact(void)
{
    // std::cout << "Destructor called" << std::endl;
    return ;
}
