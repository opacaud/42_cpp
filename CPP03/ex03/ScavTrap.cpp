/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:00:18 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/19 16:00:18 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << BOLDBLUE << "Default constructor for ScavTrap called." << RESET << std::endl;
    m_name = "";
    m_hitPoints = 100;
    m_energyPoints = 50;
    m_attackDamage = 20;
    m_scav_hitPoints = 100;
    m_scav_energyPoints = 50;
    m_scav_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << BOLDBLUE << "Constructor for ScavTrap called." << RESET << std::endl;
    m_name = name;
    m_hitPoints = 100;
    m_energyPoints = 50;
    m_attackDamage = 20;
    m_scav_hitPoints = 100;
    m_scav_energyPoints = 50;
    m_scav_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const & ScavTrapACopier) : ClapTrap(ScavTrapACopier)
{
    std::cout << BLUE << "Copy constructor for ScavTrap called." << RESET << std::endl;
    *this = ScavTrapACopier;
}

ScavTrap::~ScavTrap()
{
    std::cout << BOLDBLUE << "Destructor for ScavTrap called." << RESET << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & ScavTrapACopier)
{
    std::cout << BLUE << "Assignation operator for ScavTrap called." << RESET << std::endl;
    if (this != &ScavTrapACopier)
    {
        m_name = ScavTrapACopier.m_name;
        m_hitPoints = ScavTrapACopier.m_hitPoints;
        m_energyPoints = ScavTrapACopier.m_energyPoints;
        m_attackDamage = ScavTrapACopier.m_attackDamage;
        m_scav_hitPoints = ScavTrapACopier.m_scav_hitPoints;
        m_scav_energyPoints = ScavTrapACopier.m_scav_energyPoints;
        m_scav_attackDamage = ScavTrapACopier.m_scav_attackDamage;
    }
    return (*this);
}

////////////////////////////////////////////////////////////////////////////////

void    ScavTrap::attack(std::string const & target)
{
    std::cout << "SCAVTRAP " << m_name << " attacks " << target;
    std::cout << ", causing " << m_attackDamage << " points of damage!" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << m_name << " has entered in Gate keeper mode." << std::endl;
}
