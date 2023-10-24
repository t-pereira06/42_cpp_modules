/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 10:17:26 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/10/24 14:43:59 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <locale.h>
#include <stdio.h>
#include <fstream>

/* std::ofstream	create_file(std::string	filename)
{
	std::ofstream	file;
	filename.append(".replace");
	file.open(filename.c_str());
	return (file);
} */

std::string	checkString(std::string line, std::string s1, std::string s2)
{
	size_t	i;

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
	//creating files
	std::ifstream	file;
	std::ofstream	replaceFile;

	//names of the files
	std::string	in_filename = argv[1];
	std::string	out_filename = argv[1];
	out_filename.append(".replace");

	//converting to const char to use open
	const char *in_file = in_filename.c_str();
	const char *out_file = out_filename.c_str();

	file.open(in_file);
	replaceFile.open(out_file);
	std::string	line;
	//replaceFile = create_file(argv[1]);
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
