/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 16:13:13 by lduheron          #+#    #+#             */
/*   Updated: 2023/07/15 14:32:50 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

#define SIZE 5

class Zombie {
	private:

		std::string _name;

	public:

		Zombie(std::string name);
		Zombie();
		~Zombie(void);

	void		announce( void );
	void		setName( std::string name );

};

Zombie* zombieHorde( int N, std::string name );

#endif