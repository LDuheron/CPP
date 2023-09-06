/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 16:15:59 by lduheron          #+#    #+#             */
/*   Updated: 2023/07/23 14:56:26 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

// Constructor
Weapon::Weapon( std::string str )
{
	// std::cout << "Constructor weapon.\n";
	type = str;
}

// Destructor
Weapon::~Weapon()
{
	// std::cout << "Destructor weapon.\n";
}

std::string	Weapon::getType( void )
{
	return (type);
}

void	Weapon::setType( std::string newType )
{
	type = newType;
}