/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:53:35 by lduheron          #+#    #+#             */
/*   Updated: 2023/07/14 09:11:28 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <string>
#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <sstream>

# define INVALID -5
# define EMPTY -4
# define SUCCESS 1

class Contact {

private:

    std::string	_FirstName;
    std::string _LastName;
    std::string _Nickname;
    std::string _PhoneNumber;
    std::string _DarkestSecret;

public:

    Contact( void );
    ~Contact( void );

	int		set_FirstName();
	int		set_LastName();
	int		set_Nickname();
	int		set_PhoneNumber();
	int		set_DarkestSecret();

	void    displayContactInfo();			// print all
    void    displayRepertory( int Index );	// print for search
	void	printInfoRepertory(std::string str);
};

#endif