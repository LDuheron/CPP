/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 14:44:59 by lduheron          #+#    #+#             */
/*   Updated: 2023/08/25 18:50:36 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*

Une reference comme un pointeur stocke l'adresse d'un objet situe ailleurs dans la memoire.
ontrairement à un pointeur, une référence après son initialisation ne peut pas être définie
pour faire référence à un autre objet ni prendre la valeur null.

https://waytolearnx.com/2018/09/difference-entre-pointeur-et-reference.html

*/


int	main(void)
{
	std::string	stringContent = "HI THIS IS BRAIN";
	std::string	*stringPTR = &stringContent;
	std::string	&stringREF = stringContent;

	std::cout << &stringContent << " is the address of stringContent\n";
	std::cout << stringPTR << " is the address of stringPTR\n";
	std::cout << &stringREF << " is the address of stringREF\n\n";

	std::cout << stringContent << " is the value of stringContent\n";
	std::cout << *stringPTR << " is the value of stringPTR\n";
	std::cout << stringREF << " is the value of stringREF\n";

	return (0);
}