/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:25:41 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/20 12:51:49 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

int	main()
{
	{
		try
		{
			Bureaucrat	b("Cracked", 149);
			std::cout << b;
			b.decrementGrade();
			std::cout << b;
			b.decrementGrade();
			std::cout << b;
			b.decrementGrade();
			std::cout << b;
			b.decrementGrade();
			std::cout << b;
			b.decrementGrade();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

	}
	std::cout << std::endl;
	{
		try
		{
			Bureaucrat	b("Dizzy", 2);
			std::cout << b;
			b.incrementGrade();
			std::cout << b;
			b.incrementGrade();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

	}
	std::cout << std::endl;
	{
		try
		{
			Bureaucrat	b("John", 50);
			std::cout << b;
			b.incrementGrade();
			std::cout << b;
			b.incrementGrade();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

	}
}
