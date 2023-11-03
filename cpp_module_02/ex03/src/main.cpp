/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:05:20 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/03 14:27:41 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

int	main (void)
{
	/* Point const a(0,0);
	Point const b(6,0);
	Point const c(3,3);
	Point const p(2,2); */

	Point const a(0,0);
	Point const b(4,0);
	Point const c(0,3);
	Point const p(2,0);

	if (bsp(a, b , c, p))
		std::cout << "The point is inside of the triangle!" << std::endl;
	else
		std::cout << "The point is not inside of the triangle!"<< std::endl;
	return 0;
}
