/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:28:23 by lduheron          #+#    #+#             */
/*   Updated: 2023/07/13 19:37:07 by lduheron         ###   ########.fr       */
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


// void PhoneBook::asearch (void) {
//     int i;
//     // int index;
//     // int flag;
//     // int posStart;
//     // int posEnd;
//     // std::string UserInput;
    
//     i = 0;
//     // UserInput = NULL;
//     // posStart = 0;
//     // posEnd = 0;
//     // flag = INVALID;
//     // while (i < 8)
//     // {
//     //     displayRepertory(contact[i], i);
//     //     i++;
//     // }
//     std::cout << "Which user do you want to stalk ?? : ";
//     // while (flag == INVALID)
//     // {
//     //     std::getline(std::cin, UserInput);
//     //     if (checkInteger() == 1)
//     //         flag = SUCCESS;
//     // }
//     // index = atoi(index, &UserInput);
//     i = 0;
//     // DisplayContactInfo(contact[i]);
// }

void PhoneBook::search (void) {
    int i;

	i = 0;
	while (i < 8)
    {
        this->contact[i].displayRepertory(i);
        i++;
    }
	std::cout << "Which user do you want to stalk ?? : ";
	this->contact[0].displayContactInfo();
	
}

//  int Contact::GetInfo( void )
//  {
// 	int flag = SUCCESS;
// 	std::string FirstName_tmp;
// 	std::string LastName_tmp;
// 	std::string Nickname_tmp;
// 	std::string PhoneNumber_tmp;
// 	std::string DarkestSecret_tmp;

// 	while (42)
// 	{
// 		std::cout << "What's your darkest secret ? : ";
// 		std::getline(std::cin, DarkestSecret_tmp);
// 		if (DarkestSecret_tmp.length() == 0)
// 		{
// 				flag = INVALID;
// 				break ;		
// 		}
// 		break ;
// 	}
// 	if (flag == INVALID)
// 	{
// 		std::cout << "Please, complete all fields.\n";
// 		FirstName_tmp.clear();
// 		LastName_tmp.clear();
// 		Nickname_tmp.clear();
// 		PhoneNumber_tmp.clear();
// 		DarkestSecret_tmp.clear();
// 		return (INVALID);
// 	}

// 	this->FirstName = FirstName_tmp;
// 	this->LastName = LastName_tmp;
// 	this->Nickname = Nickname_tmp;
// 	this->PhoneNumber = PhoneNumber_tmp;
// 	this->DarkestSecret = DarkestSecret_tmp;

// 	FirstName_tmp.clear();
// 	LastName_tmp.clear();
// 	Nickname_tmp.clear();
// 	PhoneNumber_tmp.clear();
// 	DarkestSecret_tmp.clear();
// 	return (SUCCESS);
// }

int	PhoneBook::AddContact(int index)
{
	if (this->contact[index].set_FirstName() == SUCCESS)
		if (this->contact[index].set_LastName() == SUCCESS)
			if (this->contact[index].set_Nickname() == SUCCESS)
				if (this->contact[index].set_PhoneNumber() == SUCCESS)
					if (this->contact[index].set_DarkestSecret() == SUCCESS)
						return (SUCCESS);
	std::cout << "Please, complete all fields.\n";
	return (EMPTY);
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
