/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 14:33:21 by lduheron          #+#    #+#             */
/*   Updated: 2023/07/04 17:39:18 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <string>
#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <sstream>
#include "Contact.hpp"

class PhoneBook {
    
public:
    Contact contact[8];
    int nb_contact;

    PhoneBook(void);
    ~PhoneBook(void);

    void run( void ) ;
    void    DisplayContactInfo(Contact contact);
    void    displayPhonebook( Contact contact, int Index );
    void    search( void ) ;


private:

  

};

#endif
