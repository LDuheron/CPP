/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 14:33:21 by lduheron          #+#    #+#             */
/*   Updated: 2023/07/13 19:35:23 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# define INVALID -5
# define EMPTY -4
# define SUCCESS 1

#include <string>
#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <sstream>
#include "Contact.hpp"

class PhoneBook {
private:
   Contact contact[8];
 
public:
 
    int nb_contact;

    PhoneBook(void);
    ~PhoneBook(void);

    void    run( void ) ;
	int		AddContact( int index ) ;
    void    search( void ) ;

};

#endif
