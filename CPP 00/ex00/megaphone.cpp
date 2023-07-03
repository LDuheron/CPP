/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 10:55:01 by lduheron          #+#    #+#             */
/*   Updated: 2023/07/03 14:15:56 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <stdio.h>
#include <ctype.h>

// prendre en compte le controle D

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 0;
    j = 1;
    if (argc < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while (j < argc)
        {
            std::string input = argv[j];
            i = 0;
            while (input[i] != '\0')
            {
                input[i] = toupper(input[i]);
                std::cout << input[i];
                i++;
            }
            j++;
        }
        std::cout << std::endl;
    }
    return (0);
}
