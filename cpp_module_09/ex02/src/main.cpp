/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:27:12 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/12/26 14:20:09 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PmergeMe.hpp"

int	checkDoubles(int number, std::vector<int> &vector)
{
	for (std::vector<int>::iterator it = vector.begin(); it != vector.end(); it++)
	{
		if (number == *it)
			return 0;
	}
	return 1;
}

int	checkArgs(int argc, char **argv)
{
	for (int i = 1; i < argc; i++)
		for (int j = 0; argv[i][j] != '\0'; j++)
			if (!isdigit(argv[i][j]))
				return 0;
	return 1;
}
int	main(int argc, char **argv)
{
	if (argc < 3)
	{
		std::cerr << "Error: Invalid number of arguments." << std::endl;
		return 0;
	}
	if (!checkArgs(argc, argv))
	{
		std::cerr << "Error: All numbers must be positive integers." << std::endl;
		return 0;
	}
	std::vector<int> args;
	for (int i = 1; i < argc; i++)
	{
		if (!checkDoubles(atoi(argv[i]), args))
		{
			std::cerr << "Error: There is duplicate numbers." << std::endl;
			return 0;
		}
		args.push_back(atoi(argv[i]));
	}
	PmergeMe obj(args);
	return 0;
}
