/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:25:41 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/22 15:12:50 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/Bureaucrat.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

int	main()
{
	std::cout << std::endl;
	std::cout << "\033[33mTESTING SHRUBBERY_CREATION_FORM\033[0m" << std::endl;
	std::cout << std::endl;
	{
		try
		{
			Bureaucrat	a("Cracked", 15);
			ShrubberyCreationForm	c("Maths");
			std::cout << a << std::endl;
			std::cout << c << std::endl;
			a.signForm(c);
			a.executeForm(c);
			c.execute(a);
			std::cout << std::endl;
			std::cout << c;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << "--------------------------------------------------" << std::endl << std::endl;
	std::cout << "\033[33mTESTING ROBOTOMY_REQUEST_FORM\033[0m" << std::endl;
	std::cout << std::endl;
	{
		try
		{
			Bureaucrat	a("Cracked", 40);
			RobotomyRequestForm	c("Maths");
			std::cout << a << std::endl;
			std::cout << c << std::endl;
			a.signForm(c);
			a.executeForm(c);
			c.execute(a);
			std::cout << std::endl;
			std::cout << c;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << "--------------------------------------------------" << std::endl << std::endl;
	std::cout << "\033[33mTESTING PRESIDENTIAL_PARDON_FORM\033[0m" << std::endl;
	std::cout << std::endl;
	{
		try
		{
			Bureaucrat	a("Cracked", 3);
			PresidentialPardonForm	c("Maths");
			std::cout << a << std::endl;
			std::cout << c << std::endl;
			a.signForm(c);
			a.executeForm(c);
			c.execute(a);
			std::cout << std::endl;
			std::cout << c;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
}
