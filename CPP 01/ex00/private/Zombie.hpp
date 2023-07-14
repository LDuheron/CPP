/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 16:13:13 by lduheron          #+#    #+#             */
/*   Updated: 2023/07/14 19:21:26 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie {
	private:

		std::string name;

	public:

		Zombie(std::string name);
		~Zombie(void);

	void		announce( void );
	std::string	get_name( void );

};

void	randomChump( std::string name );
Zombie*	newZombie( std::string name );

#endif