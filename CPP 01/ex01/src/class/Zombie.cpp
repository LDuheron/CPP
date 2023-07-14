/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 16:15:59 by lduheron          #+#    #+#             */
/*   Updated: 2023/07/14 20:27:25 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Constructor
Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << this->_name << " created.\n";
	return ;
}

// Destructor
Zombie::~Zombie(void)
{
	std::cout << this->_name << " destructed.\n";
	return ;
}

void	Zombie::setName( std::string name )
{
	this->_name = name;
}

void	Zombie::announce( void )
{
	std::cout << ": BraiiiiiiinnnzzzZ...\n";
}

