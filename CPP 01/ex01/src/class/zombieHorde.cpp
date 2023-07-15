/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 16:16:05 by lduheron          #+#    #+#             */
/*   Updated: 2023/07/15 14:29:40 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	int i = 0;
	if (N <= 0)
		return (NULL);

	Zombie *horde = new Zombie[N]; // boicle while de new
	
	while (i < N)
	{
		// horde[i] = new Zombie(name);
		horde[i].setName(name);
		i++;
	}
	return (horde);
}
