/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:05:09 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/03 14:18:34 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

Fixed area(Point const a, Point const b, Point const c)
{
	Fixed	calc;

	calc = (a.getx() * (b.gety() - c.gety()) + b.getx() * (c.gety() - a.gety()) + c.getx() * (a.gety() - b.gety())) / 2;
	return (std::abs(calc.toFloat()));
}

bool isPointOnLineSegment(Point const a, Point const b, Point const p)
{
	if ((p.getx() >= std::min(a.getx(), b.getx()) && p.getx() <= std::max(a.getx(), b.getx())) &&
		(p.gety() >= std::min(a.gety(), b.gety()) && p.gety() <= std::max(a.gety(), b.gety()))) {
		return (true);
	}
	return (false);
}

bool isPointOnTriangleEdge(Point const a, Point const b, Point const c, Point const p)
{
	if (isPointOnLineSegment(p, a, b) || isPointOnLineSegment(p, b, c) || isPointOnLineSegment(p, c, a)) {
		return true;
	}
	return false;
}

bool bsp( Point const a, Point const b, Point const c, Point const p)
{
	Fixed	ABC = area(a, b ,c);
	if (ABC == 0)
	{
		std::cout << "Triangle is not valid!";
		exit(1);
	}
	Fixed	PCB = area(b, c ,p);
	Fixed	PAC = area(a, c ,p);
	Fixed	PAB = area(a, b ,p);
	if ((p.getx() == a.getx() && p.gety() == a.gety()) || (p.getx() == b.getx() && p.gety() == b.gety())
		|| (p.getx() == c.getx() && p.gety() == c.gety()))
	{
		std::cout << "The point is on a vertice of the triangle!" << std::endl;
		return (false);
	}
	if (isPointOnTriangleEdge(a, b, c, p))
	{
		std::cout << "The point is on the edge of the triangle!" << std::endl;
		return (false);
	}
	return (ABC == PCB + PAC + PAB);
}
