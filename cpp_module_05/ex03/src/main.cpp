/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:25:41 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/23 14:16:05 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/Bureaucrat.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/Intern.hpp"

int	main()
{
	std::cout << "\033[33mTESTING WORKING\033[0m" << std::endl;
	std::cout << std::endl;
	{
		try
		{
			Bureaucrat	cracked("Cracked", 15);
			Intern Intern;
			AForm* shrubberyform;
			shrubberyform = Intern.makeForm("shrubbery creation", "Bender");
			std::cout << *shrubberyform;
			cracked.signForm(*shrubberyform);
			cracked.executeForm(*shrubberyform);
			delete shrubberyform;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	std::cout << std::endl;
	std::cout << "--------------------------------------------------" << std::endl << std::endl;
	std::cout << "\033[33mTESTING ERROR\033[0m" << std::endl;
	std::cout << std::endl;
	{
		try
		{
			Intern someRandomIntern;
			AForm* rrf;
			rrf = someRandomIntern.makeForm("maths creation", "Cracked");
			delete rrf;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

}
