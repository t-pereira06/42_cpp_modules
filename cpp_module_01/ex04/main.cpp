/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 10:17:26 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/10/30 16:11:00 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <locale.h>
#include <stdio.h>
#include <fstream>

std::string	checkString(std::string line, std::string s1, std::string s2)
{
	size_t	i;

	while (1)
	{
		//find the s1 on line, giving i the start of the instance on the line
		i = line.find(s1);

		//if we got to the end of the string, break
		if (i == std::string::npos)
			break;

		/*starting to erase from beggining to end, start being the beginning
		of s1 instance and end being the size of s1*/
		line.erase(i, s1.length());

		//insert s2 on line starting in i
		line.insert(i, s2);

		//go forward x lenght of s2 to keep writing the rest of string
		i += s2.length();
	}
	return (line);
}

int	main(int argc, char** argv)
{
	//checking if the program ran with 3 arguments
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

	//opening files
	file.open(in_file);
	//check if file exists
	if (!file)
	{
		std::cout << "File does not exist!" << std::endl;
		return (0);
	}
	replaceFile.open(out_file);

	std::string	line;

	/*function to check if there the string1 exists on in_file and
	replace for string2 and print on out_file*/
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
	return (0);
}
