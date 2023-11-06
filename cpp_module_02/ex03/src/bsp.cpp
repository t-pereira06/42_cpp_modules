/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:05:09 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/06 16:23:03 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

//Equations to get the necessary values the check if the point is on the segment
// y = mx + b
// m = (y2 - y1)/(x2 - x1)
// y - mx = b
Fixed area(Point const a, Point const b, Point const c)
{
	Fixed	calc;

	calc = (a.getx() * (b.gety() - c.gety()) + b.getx() * (c.gety() - a.gety()) + c.getx() * (a.gety() - b.gety())) / 2;
	return (std::abs(calc.toFloat()));
}

Fixed	get_b()

bool pointOnLineSegment(Point const a, Point const b, Point const p)
{

}


/* To check if a point lies on a line segment in C++:

1- Calculate the distance between the given point and the two endpoints of the line segment.

2- Compare this distance to the length of the line segment.

If the distance between the point and the two endpoints is equal to the length of the line segment, the point lies on the line segment. */
bool pointOnEdge(Point const a, Point const b, Point const c, Point const p)
{
	if (pointOnLineSegment(a, b, p) || pointOnLineSegment(b, c, p) || pointOnLineSegment(a, c, p))
		return (true);
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
	/* if (pointOnEdge(a, b, c, p))
	{
		std::cout << "The point is on the edge of the triangle!" << std::endl;
		return (false);
	} */
	return (ABC == (PCB + PAC + PAB));
}
