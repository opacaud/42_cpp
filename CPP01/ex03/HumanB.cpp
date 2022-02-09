/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 14:25:07 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/13 14:25:07 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : m_name(name)
{
	// std::cout << BOLDBLUE << "Constructor for HumanB called." << RESET << std::endl;
}

HumanB::~HumanB()
{
    // std::cout << BOLDBLUE << "Destructor for HumanB called." << RESET << std::endl;
}

////////////////////////////////////////////////////////////////////////////////

void    HumanB::attack()
{
    if (m_weapon == NULL)
        std::cout << BOLDMAGENTA << m_name << " attacks with his bare hands" << RESET << std::endl;
    else
        std::cout << BOLDMAGENTA << m_name << " attacks with his " << m_weapon->getType() << RESET << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    m_weapon = &weapon;
}

void    HumanB::setWeapon(Weapon *weapon)
{
    m_weapon = weapon;
}
