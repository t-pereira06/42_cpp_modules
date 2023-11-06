/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:05:20 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/06 15:40:33 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

int	main (void)
{
	{
		Point const a(0,0);
		Point const b(6,0);
		Point const c(3,3);
		Point const p(3,1);

		std::cout << "A(" << a.getx() << "," << a.gety() << ")" << std::endl;
		std::cout << "B(" << b.getx() << "," << b.gety() << ")" << std::endl;
		std::cout << "C(" << c.getx() << "," << c.gety() << ")" << std::endl;
		std::cout << "P(" << p.getx() << "," << p.gety() << ")" << std::endl;
		std::cout << std::endl;

		if (bsp(a, b , c, p))
			std::cout << "The point is inside of the triangle!" << std::endl;
		else
			std::cout << "The point is not inside of the triangle!"<< std::endl;
		std::cout << std::endl;
	}

	{
		Point const a(0,0);
		Point const b(6,0);
		Point const c(3,3);
		Point const p(20, 20);

		std::cout << "A(" << a.getx() << "," << a.gety() << ")" << std::endl;
		std::cout << "B(" << b.getx() << "," << b.gety() << ")" << std::endl;
		std::cout << "C(" << c.getx() << "," << c.gety() << ")" << std::endl;
		std::cout << "P(" << p.getx() << "," << p.gety() << ")" << std::endl;
		std::cout << std::endl;

		if (bsp(a, b, c, p))
			std::cout << "The point is inside of the triangle!" << std::endl;
		else
			std::cout << "The point is not inside of the triangle!"<< std::endl;
		std::cout << std::endl;
	}

	{
		Point const a(0,0);
		Point const b(4,0);
		Point const c(0,3);
		Point const p(0,2);

		std::cout << "A(" << a.getx() << "," << a.gety() << ")" << std::endl;
		std::cout << "B(" << b.getx() << "," << b.gety() << ")" << std::endl;
		std::cout << "C(" << c.getx() << "," << c.gety() << ")" << std::endl;
		std::cout << "P(" << p.getx() << "," << p.gety() << ")" << std::endl;
		std::cout << std::endl;

		if (bsp(a, b , c, p))
			std::cout << "The point is inside of the triangle!" << std::endl;
		else
			std::cout << "The point is not inside of the triangle!"<< std::endl;
	}
	return 0;
}
