/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 10:39:21 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/19 10:39:21 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main()
{
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));

    std::cout << std::endl << BOLDBLUE << "a:   " << RESET << a << std::endl;
    std::cout << BOLDBLUE << "++a: " << RESET << ++a << std::endl;
    std::cout << BOLDBLUE << "a:   " << RESET << a << std::endl;
    std::cout << BOLDBLUE << "a++: " << RESET << a++ << std::endl;
    std::cout << BOLDBLUE << "a:   " << RESET << a << std::endl << std::endl;

    std::cout << BOLDBLUE << "b:   " << RESET << b << std::endl << std::endl;

    std::cout << BOLDBLUE << "max(a, b): " << RESET << Fixed::max(a, b) << std::endl;

    Fixed c(Fixed(b) / (Fixed(4.0f) - Fixed(2)));

    std::cout << std::endl << BOLDBLUE << "c:   " << RESET << c << std::endl;

    Fixed d(c);
    std::cout << BOLDBLUE << "d:   " << RESET << d << std::endl;

    std::cout << BOLDBLUE << "Comp c == d: " << RESET << (c == d) << std::endl << std::endl;

    std::cout << BOLDBLUE << "d++: " << RESET << d++ << std::endl;
    std::cout << BOLDBLUE << "d:   " << RESET << d << std::endl;

    std::cout << BOLDBLUE << "Comp c > d: " << RESET << (c > d) << std::endl << std::endl;

    std::cout << BOLDBLUE << "--c: " << RESET << --c << std::endl << std::endl;

    std::cout << BOLDBLUE << "c + 1.0: " << RESET << c + 1.0f << std::endl << std::endl;
    
    std::cout << BOLDBLUE << "min(c, d): " << RESET << Fixed::min(c, d) << std::endl << std::endl;

    return (0);
}
