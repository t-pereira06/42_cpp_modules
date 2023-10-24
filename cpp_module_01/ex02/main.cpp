/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:52:38 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/10/24 13:04:49 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <locale.h>
#include <stdio.h>
#include <iomanip>

int	main(void)
{
	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPTR =  &string;
	std::string&	stringREF = string;

	std::cout << "Memory adresses:" << std::endl;
	std::cout << &string << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "Values:" << std::endl;
	std::cout << string << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
	return (0);
}
