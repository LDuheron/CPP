/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 16:15:49 by lduheron          #+#    #+#             */
/*   Updated: 2023/07/23 15:36:08 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>
#include <algorithm>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Please enter 3 arguments.\n";
		return (0);
	}
	std::string		filename = argv[1];
	std::string		outfile_name = filename + ".replace";
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];
	std::ifstream	infile(argv[1]);
	std::ofstream 	outfile(outfile_name.c_str());


	if (s1.empty() || s2.empty())
		return (0);

	// ouvrir infile
	infile.open(argv[1]);
		// return (ERROR);

	// creer le fichier
	outfile.is_open();
	// boucler pour remplacer
	// outfile << "test";
		outfile << "test";

	std::string		line;
	// int				len = s1.length();
	// int				pos = 0;
	while (std::getline(infile, line))
	{
		outfile << "test";
		std::cout << line;
		// pos = 0;
		// outfile << "another test\n";
		// if (line[pos])
		// 	outfile << "DEBUG";
		// while (line[pos])
		// {
		// 	outfile << line[pos];
				

		// 	if (line[pos])
		// 	{
		// 		std::cout << "Replace";
		// 		line.erase(pos, len);
		// 		line.insert(pos, s2);
		// 	// 	//remplacer;
		// 	}
		// 	pos++;
		// }
	
	}

	infile.close();
	outfile.close();
	return (0);
}


// int		ft_strcmp(std::string str, std::string stack, int pos)
// {
	
// }

// char	*ft_strnstr(const char *big, const char *little, size_t len)
// {
// 	size_t	i;
// 	size_t	j;
// 	size_t	littlelen;

// 	i = 0;
// 	j = 0;
// 	littlelen = ft_strlen(little);
// 	if (!littlelen || !big)
// 		return ((char *)big);
// 	if (len < 0)
// 		len = ft_strlen(big);
// 	while (i < len && big[i])
// 	{
// 		j = 0;
// 		while (big[i + j] && big[i + j] == little[j] && (i + j) < len)
// 		{
// 			j++;
// 		}
// 		if (j == littlelen)
// 			return ((char *)&big[i]);
// 		i++;
// 	}
// 	return (NULL);
// }

// https://cplusplus.com/reference/sstream/stringstream/