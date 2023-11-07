/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:05:09 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/07 11:41:01 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

Fixed area(Point const a, Point const b, Point const c)
{
	Fixed	calc;

	calc = (a.getx() * (b.gety() - c.gety()) + b.getx() * (c.gety() - a.gety()) + c.getx() * (a.gety() - b.gety())) / 2;
	return (std::abs(calc.toFloat()));
}

/* Inside the function, the code first checks if the point p lies on the same line as points a and b.
This is done by comparing the cross product of vectors formed by (p.x - a.x) and (b.y - a.y) with (b.x - a.x) and (p.y - a.y).
If these two cross products are equal, it means that p, a, and b are collinear (lie on the same line).

If the first condition is met, the code proceeds to check whether point p lies within the line segment [AB].
It compares the x and y coordinates of p with the minimum and maximum values of the x and y coordinates of a and b.
If p is within these boundaries, it means that p is on the line segment. */
bool isPointOnSegment(Point a, Point b, Point p) {
	//Check if point p belongs in the line segment defined by points A and B
	if ((p.getx() - a.getx()) * (b.gety() - a.gety()) == (b.getx() - a.getx()) * (p.gety() - a.gety())) {
		//Check if point p in on the line segment of [AB]
		if (p.getx() >= std::min(a.getx(), b.getx()) && p.getx() <= std::max(a.getx(), b.getx()) &&
			p.gety() >= std::min(a.gety(), b.gety()) && p.gety() <= std::max(a.gety(), b.gety())) {
			return (true);
		}
	}
	return (false);
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
	if (isPointOnSegment(a, b, p) || isPointOnSegment(b, c, p) || isPointOnSegment(a, c, p))
	{
		std::cout << "The point is on the edge of the triangle!" << std::endl;
		return (false);
	}
	return (ABC == (PCB + PAC + PAB));
}
