/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:00:02 by tsodre-p          #+#    #+#             */
/*   Updated: 2023/11/07 11:20:54 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const x;
		Fixed const y;
	public:
		Point();
		Point(float const x, float const y);
		~Point();
		Point(Point const &copy);
		Point &operator= (const Point &copy);
		Fixed	getx() const;
		Fixed	gety() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
