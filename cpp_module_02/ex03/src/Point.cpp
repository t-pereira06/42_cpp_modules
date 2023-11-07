/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:05:23 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/07 11:20:39 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

/* Constructors */

Point::Point() : x(0), y(0)
{
}

Point::Point(float const x, float const y) : x(x), y(y)
{
}

Point::Point (Point const &copy) : x(copy.x), y(copy.y)
{
}

Point::~Point()
{
}

/* Operators */

Point	&Point::operator=(const Point &copy)
{
	if (this != &copy)
	{
		(Fixed) this->x = copy.x;
		(Fixed) this->y = copy.y;
	}
	return (*this);
}

/* Member Functions */

Fixed	Point::getx() const
{
	return (this->x);
}

Fixed	Point::gety() const
{
	return (this->y);
}
