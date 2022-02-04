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

    std::cout << bsp(a, b, c, d) << std::endl;
    std::cout << bsp(a, b, c, e) << std::endl;
    std::cout << bsp(a, b, c, f) << std::endl;
    std::cout << bsp(a, b, c, g) << std::endl;

    return (0);
}
