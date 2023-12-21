/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 16:26:05 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/12/21 12:23:57 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RPN.hpp"

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cerr << "Error: No arguments!" << std::endl;
	RPN obj = RPN();
	obj.checkArgs(argv[1]);
	obj.execute(argv[1]);
	return 0;
}
