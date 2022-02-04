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

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;

    std::cout << Fixed::max(a, b) << std::endl;

    Fixed c(Fixed(b) / (Fixed(4.0f) - Fixed(2)));

    std::cout << std::endl << "c : " << c << std::endl;

    Fixed d(c);

    std::cout << "Comparateur c == d : " << (c == d) << std::endl;

    std::cout << "d++ : " << d++ << std::endl;
    std::cout << "d : " << d << std::endl;

    std::cout << "Comparateur c > d : " << (c > d) << std::endl;

    std::cout << "--c : " << --c << std::endl;

    std::cout << "c + 1.0 = " << c + 1.0f << std::endl;
    
    std::cout << "min(c, d) : " << Fixed::min(c, d) << std::endl;

    return (0);
}
