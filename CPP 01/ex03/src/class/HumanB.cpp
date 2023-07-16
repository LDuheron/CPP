/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:19:46 by lduheron          #+#    #+#             */
/*   Updated: 2023/07/16 14:30:54 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

// Constructor
HumanB::HumanB( std:: string name ) : name(name), weapon(NULL)
{
	std::cout << "Constructor Human B.\n";
}

// Destructor
HumanB::~HumanB()
{
	std::cout << "Destructor Human B.\n";
}

void	HumanB::attack( void )
{
	std::cout << this->name << " attacks with their " << this->getWeapon() << std::endl;
}

std::string HumanB::getWeapon (void)
{
	return (weapon->getType());
}

void	HumanB::setWeapon (Weapon &newWeapon)
{
	this->weapon = &newWeapon;
}
