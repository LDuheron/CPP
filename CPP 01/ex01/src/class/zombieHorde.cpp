/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 16:16:05 by lduheron          #+#    #+#             */
/*   Updated: 2023/07/14 20:26:01 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N <= 0)
		return (NULL);

	Zombie *horde = new Zombie[N + 1];
	while (i < N)
	{
		horde[i].setName(name);
		i++;
	}
	return (horde);
}
