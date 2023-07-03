/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 10:55:01 by lduheron          #+#    #+#             */
/*   Updated: 2023/07/03 10:55:15 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

// toupper
// : cout<<s2; cin>>s1;
// prendre en compte le controle D

int main(void)
{
    char buffer[524];

    std::cout << "Hello !" << std::endl;
    std::cout << "Enter input";
    std::cin >> buffer;
    std::cout << "YOU ENTERED : [" << buffer << "]" << std::endl;
    return (0);
}
