/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 14:25:22 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/13 14:25:22 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() : m_type("")
{
    // std::cout << BOLDBLUE << "Default constructor for Weapon called." << RESET << std::endl;
}

Weapon::Weapon(std::string type)
{
	// std::cout << BOLDBLUE << "Constructor for Weapon called." << RESET << std::endl;
    m_type = type;
}

Weapon::~Weapon()
{
    // std::cout << BOLDBLUE << "Destructor for Weapon called." << RESET << std::endl;
}

////////////////////////////////////////////////////////////////////////////////

std::string const   &Weapon::getType()
{
    return (m_type);
}

void    Weapon::setType(std::string type)
{
    m_type = type;
}
