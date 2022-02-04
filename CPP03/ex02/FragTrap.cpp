/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:59:34 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/19 15:59:34 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << BOLDBLUE << "Default constructor for FragTrap called." << RESET << std::endl;
    m_name = "";
    m_hitPoints = 100;
    m_energyPoints = 100;
    m_attackDamage = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << BOLDBLUE << "Constructor for FragTrap called." << RESET << std::endl;
    m_name = name;
    m_hitPoints = 100;
    m_energyPoints = 100;
    m_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const & FragTrapACopier) : ClapTrap(FragTrapACopier)
{
    std::cout << BLUE << "Copy constructor for FragTrap called." << RESET << std::endl;
    *this = FragTrapACopier;
}

FragTrap::~FragTrap()
{
    std::cout << BOLDBLUE << "Destructor for FragTrap called." << RESET << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & FragTrapACopier)
{
    std::cout << BLUE << "Assignation operator for FragTrap called." << RESET << std::endl;
    if (this != &FragTrapACopier)
    {
        m_name = FragTrapACopier.m_name;
        m_hitPoints = FragTrapACopier.m_hitPoints;
        m_energyPoints = FragTrapACopier.m_energyPoints;
        m_attackDamage = FragTrapACopier.m_attackDamage;
    }
    return (*this);
}

////////////////////////////////////////////////////////////////////////////////

void    FragTrap::highFivesGuys(void)
{
    std::cout << "High five guys!!" << std::endl;
}
