/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:28:23 by lduheron          #+#    #+#             */
/*   Updated: 2023/07/14 13:06:01 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

// Constructor
PhoneBook::PhoneBook(void)
{
    // std::cout << "Constructor PhoneBook called" << std::endl;
    return ;
}

// Destructor
PhoneBook::~PhoneBook(void)
{
    // std::cout << "Destructor PhoneBook called" << std::endl;
    return ;
}

void PhoneBook::search (void)
{
	int UserInput;
    int i = 0;

	while (i < 8)
    {
        this->contact[i].displayRepertory(i);
        i++;
    }
	std::cout << "Which user do you want to stalk ? : ";
    while (!(std::cin >> UserInput))
	{
        std::cout << "Invalid input. Please enter an integer: ";
        std::cin.clear(); // Clear error state
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
    }
	if (UserInput >= 1 && UserInput <= 8)
		this->contact[UserInput].displayContactInfo();
	else
		std::cout << "This contact doesn't exist.\n";
	
}

int	PhoneBook::AddContact(int index)
{
	if (this->contact[8].set_FirstName() == SUCCESS)
		if (this->contact[8].set_LastName() == SUCCESS)
			if (this->contact[8].set_Nickname() == SUCCESS)
				if (this->contact[8].set_PhoneNumber() == SUCCESS)
					if (this->contact[8].set_DarkestSecret() == SUCCESS)
					{
						this->contact[index] = this->contact[8];
						return (SUCCESS);
					}
	std::cout << "Please, complete all fields.\n";
	return (EMPTY);
}

void    PhoneBook::run(void)
{
    std::string UserInput;

	nb_contact = 0;
    while (UserInput != "EXIT")
    {
        std::cout << "\rWhat do you want to do ? (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, UserInput);
		if (nb_contact == 8)
            nb_contact = 0;
        if (std::cin.eof())
        {
            std::cout << std::endl << "Exiting the phonebook. All contacts are lost forever." << std::endl;
            break ;
        }
        else if (UserInput == "ADD")
        {
            if (AddContact(nb_contact) == SUCCESS)
                nb_contact++;
        }
        else if (UserInput == "SEARCH")
            search();
        else if (UserInput == "EXIT")
        {
            std::cout << std::endl << "Exiting the phonebook. All contacts are lost forever." << std::endl;
            break ;
        }
    }
}
