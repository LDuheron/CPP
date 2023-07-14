/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 16:15:59 by lduheron          #+#    #+#             */
/*   Updated: 2023/07/14 19:23:13 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Constructor
Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << this->name << " created.\n";
	return ;
}

// Destructor
Zombie::~Zombie(void)
{
	std::cout << this->name << " destructed.\n";
	return ;
}

void	Zombie::announce( void )
{
	std::cout << ": BraiiiiiiinnnzzzZ...\n";
}
