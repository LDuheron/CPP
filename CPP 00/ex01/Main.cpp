/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 14:54:40 by lduheron          #+#    #+#             */
/*   Updated: 2023/07/03 16:24:58 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"
#include <iostream>
#include <string>

int main(void)
{
    std::string UserInput;
    while (UserInput != "EXIT")
    {
        std::cout << "Enter your input : ";
        std::getline(std::cin, UserInput);
        if (UserInput == "ADD")
            PhoneBook instance;
        else if (UserInput == "EXIT")
            break ;
    }
    return (0);
}

// else if (UserInput == "SEARCH")