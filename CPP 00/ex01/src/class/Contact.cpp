/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:29:09 by lduheron          #+#    #+#             */
/*   Updated: 2023/07/13 19:08:21 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

#include <cstdlib>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <unistd.h>

// Constructor 
Contact::Contact(void)
{
	// std::cout << "Constructor called" << std::endl;
	return ;
}

// Destructor
Contact::~Contact(void)
{
	// std::cout << "Destructor called" << std::endl;
	return ;
}

// set* : Those functions
// Returns 0 if the input is empty, and 1 in success.

int Contact::set_FirstName()
{
	std::string tmp;

	std::cout << "\rFirst name : ";
	std::getline(std::cin, tmp);
	if (tmp.length() == 0)
		return (EMPTY);
	this->_FirstName = tmp;
	return (SUCCESS);
}

int	Contact::set_LastName()
{
	std::string	tmp;

	std::cout << "Last name : ";
	std::getline(std::cin, tmp);
	if (tmp.length() == 0)
		return (EMPTY);
	this->_LastName = tmp;
	return (SUCCESS);
}

int	Contact::set_Nickname()
{
	std::string	tmp;

	std::cout << "Nickname : ";
	std::getline(std::cin, tmp);
	if (tmp.length() == 0)
		return (EMPTY);
	this->_Nickname = tmp;
	return (SUCCESS);
}

int	Contact::set_PhoneNumber()
{
	std::string	tmp;

	std::cout << "Phone number : ";
	std::getline(std::cin, tmp);
	if (tmp.length() == 0)
		return (EMPTY);
	this->_PhoneNumber = tmp;
	return (SUCCESS);
}

int	Contact::set_DarkestSecret()
{
	std::string	tmp;

	std::cout << "What's your darkest secret ? : ";
	std::getline(std::cin, tmp);
	if (tmp.length() == 0)
		return (EMPTY);
	this->_DarkestSecret = tmp;
	return (SUCCESS);
}


// displayContactInfo : This function displays all the information of a contact.

void	Contact::displayContactInfo()
{
	std::cout << "\nFirst name : " << this->_FirstName << std::endl;
    std::cout << "Last name : " << this->_LastName << std::endl;
    std::cout << "Phone number : " << this->_PhoneNumber << std::endl;
    std::cout << "Nickname : " << this->_Nickname << std::endl;
    std::cout << "Darkest secret : " << this->_DarkestSecret << "\n" << std::endl;
}

// displayRepertory: This function displays the first name, last name, and nickname 
// of a contact, separate by a pipe and for 10n max.

void    Contact::displayRepertory(int Index)
{
    if (Index == 0)
        std::cout << std::endl;
    if (this->_FirstName.empty())
        std::cout << "| " << Index + 1 << " |          |          |          |" << std::endl;
        
    else
    {
        std::cout << "| " << Index + 1 << " |";
        std::cout << std::setfill(' ') 
                << std::setw(10) << this->_FirstName.substr(0, 10) << "|"
                << std::setw(10) << this->_LastName.substr(0, 10) << "|"
                << std::setw(10) << this->_Nickname.substr(0, 10) << "|\n";
    }
    if (Index == 7)
        std::cout << std::endl;
}
