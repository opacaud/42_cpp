/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 10:39:38 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/19 10:39:38 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int main()
{
    Point a(Fixed(-1), Fixed(0));
    Point b(Fixed(0), Fixed(1));
    Point c(Fixed(1), Fixed(0));

    Point d(Fixed(0), Fixed(0.5f));
    Point e(Fixed(2.05f), Fixed(-5.0f));
    Point f(Fixed(0), Fixed(0));
    Point g(Fixed(0), Fixed(0.1f));

    int res;

    std::cout << std::endl << BOLDGREEN << "Point is in the triangle" << RESET << std::endl;
    res = bsp(a, b, c, d);
    std::cout << BOLDBLUE << "BSP function returns: " << RESET << BOLDGREEN << res << RESET << std::endl << std::endl;

    std::cout << BOLDRED << "Point is NOT in the triangle" << RESET << std::endl;
    res = bsp(a, b, c, e);
    std::cout << BOLDBLUE << "BSP function returns: " << RESET << BOLDRED << res << RESET << std::endl << std::endl;

    std::cout << BOLDRED << "Point is on a side so NOT in the triangle" << RESET << std::endl;
    res = bsp(a, b, c, f);
    std::cout << BOLDBLUE << "BSP function returns: " << RESET << BOLDRED << res << RESET << std::endl << std::endl;

    std::cout << BOLDGREEN << "Point is just in the triangle" << RESET << std::endl;
    res = bsp(a, b, c, g);
    std::cout << BOLDBLUE << "BSP function returns: " << RESET << BOLDGREEN << res << RESET << std::endl << std::endl;

    return (0);
}
