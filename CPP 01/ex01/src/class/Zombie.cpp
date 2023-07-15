/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 16:15:59 by lduheron          #+#    #+#             */
/*   Updated: 2023/07/15 14:40:39 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Constructor
Zombie::Zombie(std::string name)
{
	_name = name;
	std::cout << _name << " created.\n";
	return ;
}

Zombie::Zombie()
{
	this->_name = "HORDE";
	std::cout << _name << " created.\n";
	return ;
}

// Destructor
Zombie::~Zombie(void)
{
	std::cout << _name << " destructed.\n";
	return ;
}

void	Zombie::setName( std::string name )
{
	_name = name;
}

void	Zombie::announce( void )
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}

