/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 14:25:00 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/13 14:25:00 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : m_name(name), m_weapon(weapon)
{
	// std::cout << BOLDBLUE << "Constructor for HumanA called." << RESET << std::endl;
}

HumanA::~HumanA()
{
    // std::cout << BOLDBLUE << "Destructor for HumanA called." << RESET << std::endl;
}

////////////////////////////////////////////////////////////////////////////////

void    HumanA::attack()
{
    std::cout << BOLDBLUE << m_name << " attacks with his " << m_weapon.getType() << RESET << std::endl;
}
