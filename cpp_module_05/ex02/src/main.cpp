/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:25:41 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/20 16:48:17 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

int	main()
{
	{
		try
		{
			Bureaucrat	a("Cracked", 1);
			Bureaucrat	b("John", 135);
			Form	c("Maths", 70, 40);
			Form	d("Science", 45, 30);
			std::cout << a;
			a.decrementGrade();
			std::cout << a << std::endl;
			std::cout << c << std::endl;
			a.signForm(c);
			std::cout << std::endl;
			std::cout << c;
			std::cout << "-------------------------------------" << std::endl;
			std::cout << b;
			b.decrementGrade();
			std::cout << b << std::endl;
			std::cout << d << std::endl;
			b.signForm(d);
			std::cout << d;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
}
