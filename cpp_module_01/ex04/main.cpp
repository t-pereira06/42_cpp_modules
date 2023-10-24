/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 10:17:26 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/10/24 12:56:30 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <locale.h>
#include <stdio.h>
#include <fstream>

std::ofstream	create_file(std::string	filename)
{
	std::ofstream	file;
	filename.append(".replace");
	file.open(filename);
	return (file);
}

std::string	checkString(std::string line, std::string s1, std::string s2)
{
	int	i;

	while (1)
	{
		i = line.find(s1);
		if (i == std::string::npos)
			break;
		line.erase(i, s1.length());
		line.insert(i, s2);
		i += s2.length();
	}
	return (line);
}

int	main(int argc, char** argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong inputs! Start program like ./program <filename> string1 string2" << std::endl;
		return (0);
	}
	std::ifstream	file;
	std::ofstream	replaceFile;
	file.open(argv[1]);
	std::string	line;
	replaceFile = create_file(argv[1]);
	if (file.is_open() && replaceFile.is_open())
	{
		while (getline(file, line))
		{
			line = checkString(line, argv[2], argv[3]);
			replaceFile << line << "\n";
		}
		file.close();
		replaceFile.close();
	}
	else
		std::cout << "File does not exist!" << std::endl;
	return (0);
}
