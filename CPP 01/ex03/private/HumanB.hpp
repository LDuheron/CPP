/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:15:08 by lduheron          #+#    #+#             */
/*   Updated: 2023/07/23 13:34:33 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include <iostream>
#include "Weapon.hpp"

class HumanB {
	private:
		std::string name;
		Weapon		*weapon;

	public:
		HumanB( std:: string name );
		~HumanB( void );

		void		attack( void );
		void		setWeapon( Weapon &newWeapon );
		std::string	getWeapon( void );
};

#endif