/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 14:44:59 by lduheron          #+#    #+#             */
/*   Updated: 2023/07/15 15:12:11 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

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