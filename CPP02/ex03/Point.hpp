/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 10:39:44 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/19 10:39:44 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
    public :

        Point();
        Point(Fixed const x, Fixed const y);
        Point(Point const & pointACopier);
        ~Point();
        Point & operator=(Point const &pointACopier);

        Fixed const getX(void) const;
        Fixed const getY(void) const;

    private :

        Fixed const m_x;
        Fixed const m_y;
};

bool    bsp(Point const a, Point const b, Point const c, Point const point);

#endif
