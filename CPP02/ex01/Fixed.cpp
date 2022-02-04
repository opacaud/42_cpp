/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 10:41:42 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/19 10:41:42 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : m_fixed_value(0)
{
    std::cout << BOLDBLUE << "Default constructor for Fixed called." << RESET << std::endl;
}

Fixed::Fixed(int const raw)
{
    std::cout << BOLDBLUE << "Constructor for Fixed called." << RESET << std::endl;
    m_fixed_value = (raw << Fixed::m_bits);
}

Fixed::Fixed(float const raw)
{
	std::cout << BOLDBLUE << "Constructor for Fixed called." << RESET << std::endl;
    m_fixed_value = roundf(raw * (1 << Fixed::m_bits));
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
    return (m_fixed_value);
}

void    Fixed::setRawBits(int const raw)
{
    m_fixed_value = raw;
}

float   Fixed::toFloat(void) const
{
    float   ret;

    ret = (float)m_fixed_value / (float)(1 << Fixed::m_bits);
    
    return (ret);
}

int     Fixed::toInt(void) const
{
    return (m_fixed_value >> Fixed::m_bits);
}

std::ostream & operator<<(std::ostream & flux, Fixed const & fixed)
{
    flux << fixed.toFloat();
    return (flux);
}
