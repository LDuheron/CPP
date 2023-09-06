/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 16:15:59 by lduheron          #+#    #+#             */
/*   Updated: 2023/07/17 10:06:26 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// Constructor
Harl::Harl()
{
	std::cout << "Constructor Harl.\n";
}

// Destructor
Harl::~Harl()
{
	std::cout << "Destructor Harl.\n";
}

void	Harl::debug()
{
	std::cout << "[ DEBUG ]\nI love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger.";
	std::cout << " I really do!\n";
}

void	Harl::info()
{
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money.";
	std::cout << " You didn’t put enough bacon in my burger !";
	std::cout << "If you did, I wouldn’t be asking for more !\n";
}

void	Harl::warning()
{
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free.";
	std::cout << " I’ve been coming for years whereas you started working here since last month.\n";
}

void	Harl::error()
{
	std::cout << "[ ERROR ]\nThis is unacceptable ! I want to speak to the manager now.\n";
}

void	Harl::complain( std::string level )
{
	void	(Harl::*ptr[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	level_complain[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int		i = 0;

	while (i < 4)
	{
		if (level == level_complain[i])
			(this->*ptr[i])();
		i++;
	}
}

// std::string	Weapon::getType( void )
// {
// 	return (type);
// }

// void	Weapon::setType( std::string newType )
// {
// 	type = newType;
// }

/// ex06 if level = name[i]
// ++ switch (expression)
// {
// case /* constant-expression */:
// 	/* code */
// 	break;

// default:
// 	break;
// }