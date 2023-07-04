/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 14:24:17 by lduheron          #+#    #+#             */
/*   Updated: 2023/07/04 20:26:44 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

void    PhoneBook::displayPhonebook( Contact contact, int Index ) {
    if (Index == 0)
        std::cout << std::endl;
    if (contact.FirstName.empty())
        std::cout << "| " << Index + 1 << " |          |          |          |" << std::endl;
        
    else
    {
        std::cout << "| " << Index + 1 << " |";
        std::cout << std::setfill(' ') << std::setw(10);
        std::cout << contact.FirstName << "|";
        std::cout << std::setfill(' ') << std::setw(10);
        std::cout << contact.LastName << "|";
        std::cout << std::setfill(' ') << std::setw(10);
        std::cout << contact.Nickname << "|" << std::endl;
    }
    if (Index == 7)
        std::cout << std::endl;
}

void PhoneBook::search (void) {
    int i;
    std::string UserInput;
    
    i = 0;
    while (i < 8)
    {
        displayPhonebook(contact[i], i);
        i++;
    }
    std::cout << "Which user do you want to stalk ?? : ";
    std::getline(std::cin, UserInput);
    // int number = std::stoi(UserInput);
    DisplayContactInfo(contact[1]);
}

void    PhoneBook::run(void)
{
    std::string UserInput;
    while (UserInput != "EXIT")
    {
        if (nb_contact == 8)
            nb_contact = 0;
        std::cout << "What do you want to do ? (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, UserInput);
        if (std::cin.eof())
        {
            std::cout << std::endl << "Exiting the phonebook. All contacts are lost forever." << std::endl;
            break ;
        }
        if (UserInput == "ADD")
        {
            this->contact[nb_contact].GetInfo();
            nb_contact++;
        }
        if (std::cin.eof())
        {
            std::cout << std::endl << "Exiting the phonebook. All contacts are lost forever." << std::endl;
            break ;
        }
        if (UserInput == "SEARCH")
            search();
        if (std::cin.eof())
        {
            std::cout << std::endl << "Exiting the phonebook. All contacts are lost forever." << std::endl;
            break ;
        }
        if (UserInput == "EXIT")
        {
            std::cout << std::endl << "Exiting the phonebook. All contacts are lost forever." << std::endl;
            break ;
        }
        std::cout << nb_contact << std::endl;
    }
}

void    PhoneBook::DisplayContactInfo(Contact contact)
{
    std::cout << "\nFirst name : " << contact.FirstName << std::endl;
    std::cout << "Last name : " << contact.LastName << std::endl;
    std::cout << "Phone number : " << contact.PhoneNumber << std::endl;
    std::cout << "Nickname : " << contact.Nickname << std::endl;
    std::cout << "Darkest secret : " << contact.DarkestSecret << "\n" << std::endl;
}

PhoneBook::PhoneBook(void)
{
    // std::cout << "Constructor PhoneBook called" << std::endl;
    nb_contact = 0;
    return ;
}

PhoneBook::~PhoneBook(void)
{
    // std::cout << "Destructor PhoneBook called" << std::endl;
    return ;
}


// if (stdd::.eof)
// {
//     return (1);
// }