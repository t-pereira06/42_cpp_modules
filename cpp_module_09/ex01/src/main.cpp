/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 16:26:05 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/12/21 12:45:31 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RPN.hpp"

int	main(int argc, char **argv)
{
	try
	{
		if (argc == 1)
		{
			std::cerr << "Error: No arguments!" << std::endl;
			return 0;
		}
		RPN obj = RPN();
		obj.checkArgs(argv[1]);
		obj.execute(argv[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
