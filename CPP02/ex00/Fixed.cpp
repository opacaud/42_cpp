/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 10:38:36 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/19 10:38:36 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : m_fixed_value(0)
{
    std::cout << BOLDBLUE << "Default constructor for Fixed called." << RESET << std::endl;
}

Fixed::Fixed(Fixed const & fixedACopier)
{
    std::cout << BLUE << "Copy constructor for Fixed called." << RESET << std::endl;
    m_fixed_value = fixedACopier.getRawBits();
}

Fixed::~Fixed()
{
    std::cout << BOLDBLUE << "Destructor for Fixed called." << RESET << std::endl;
}

Fixed & Fixed::operator=(Fixed const & fixedACopier)
{
    std::cout << BLUE << "Assignation operator for Fixed called." << RESET << std::endl;
    if (this != &fixedACopier)
    {
        m_fixed_value = fixedACopier.getRawBits();
    }
    return (*this);
}

////////////////////////////////////////////////////////////////////////////////

int     Fixed::getRawBits(void) const
{
    std::cout << BOLDYELLOW << "getRawBits member function called" << RESET << std::endl;
    return (m_fixed_value);
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    m_fixed_value = raw;
}
