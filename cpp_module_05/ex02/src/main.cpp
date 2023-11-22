/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:25:41 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/22 09:38:02 by tsodre-p         ###   ########.fr       */
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
	{
		try
		{
			Bureaucrat	a("Cracked", 1);
			Bureaucrat	b("John", 65);
			ShrubberyCreationForm	c("Maths");
			RobotomyRequestForm	d("Science");
			std::cout << a;
			a.decrementGrade();
			std::cout << a << std::endl;
			std::cout << c << std::endl;
			a.signForm(c);
			c.execute(a);
			std::cout << std::endl;
			std::cout << c;
			std::cout << "-------------------------------------" << std::endl;
			std::cout << b;
			b.decrementGrade();
			std::cout << "droga" << std::endl;
			d.execute(b);
			std::cout << b << std::endl;
			std::cout << d << std::endl;
			b.signForm(d);
			d.execute(b);
			std::cout << d;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
}
