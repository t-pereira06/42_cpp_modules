/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 09:25:19 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/12/05 09:59:18 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/iter.hpp"

int	main(void)
{
	{
		std::cout << "INT ARRAY TEST" << std::endl;
		int	array[8] = {99, 4, 5, 2, 43, 53, 67, 72};
		std::cout << "Before decrementing: " << std::endl;
		::iter(array, 8, ::print);
		std::cout << std::endl;
		std::cout << "After decrementing: " << std::endl;
		::iter(array, 8, ::decrement);
		std::cout << std::endl;
	}
	std::cout << std::endl;
	{
		std::cout << "STRING ARRAY TEST" << std::endl;
		std::string	array[4] = {"Hi", "I'm Cracked", "I'm a robot", "and I like to scare people"};
		::iter(array, 4, ::print);
		std::cout << std::endl;
	}
	std::cout << std::endl;
	{
		std::cout << "DOUBLE ARRAY TEST" << std::endl;
		double	array[4] = {92.1, 77.4, 44.2, 10.76};
		std::cout << "Before decrementing: " << std::endl;
		::iter(array, 4, ::print);
		std::cout << std::endl;
		std::cout << "After decrementing: " << std::endl;
		::iter(array, 4, ::decrement);
		std::cout << std::endl;
	}
}
