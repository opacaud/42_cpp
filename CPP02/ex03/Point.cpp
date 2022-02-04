/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 10:39:41 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/19 10:39:41 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : m_x(0), m_y(0)
{
    // std::cout << BOLDBLUE << "Default constructor for Point called." << RESET << std::endl;
}

Point::Point(Fixed const x, Fixed const y) : m_x(x), m_y(y)
{
	// std::cout << BOLDBLUE << "Constructor for Point called." << RESET << std::endl;
}

Point::Point(Point const & pointACopier) : m_x(pointACopier.m_x), m_y(pointACopier.m_y)
{
    // std::cout << BLUE << "Copy constructor for Point called." << RESET << std::endl;
}

Point::~Point()
{
    // std::cout << BOLDBLUE << "Destructor for Point called." << RESET << std::endl;
}

Point & Point::operator=(Point const & pointACopier)
{
    // std::cout << BLUE << "Assignation operator for Point called." << RESET << std::endl;
    if (this != &pointACopier)
        return (*this);
    else
        return (*this);
}

////////////////////////////////////////////////////////////////////////////////

Fixed const Point::getX(void) const
{
    return (m_x);
}

Fixed const Point::getY(void) const
{
    return (m_y);
}
