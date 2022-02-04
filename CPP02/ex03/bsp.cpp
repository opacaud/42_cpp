/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 14:15:03 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/19 14:15:27 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed   get_area(Point const a, Point const b, Point const c)
{
    Fixed   res;
    Fixed   calculus;

    calculus = (a.getX() * (b.getY() - c.getY())) + 
                (b.getX() * (c.getY() - a.getY())) +
                (c.getX() * (a.getY() - b.getY()));
    if (calculus < 0)
        calculus = calculus * -1;
    res = calculus / 2;
    return (res);
}

bool    bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed   area1;
    Fixed   area2;
    Fixed   area3;
    Fixed   total_area;
    Fixed   triangle_area;

    area1 = get_area(a, b, point);
    area2 = get_area(b, c, point);
    area3 = get_area(c, a, point);
    total_area = area1 + area2 + area3;
    triangle_area = get_area(a, b, c);

    std::cout << "area1: " << area1 << std::endl;
    std::cout << "area2: " << area2 << std::endl;
    std::cout << "area3: " << area3 << std::endl;
    std::cout << "area1 + 2 + 3: " << area1 + area2 + area3 << std::endl;
    std::cout << "total_area: " << total_area << std::endl;
    std::cout << "triangle_area: " << triangle_area << std::endl;

    return (total_area == triangle_area && area1 != 0 && area3 != 0 && area3 != 0);
}
