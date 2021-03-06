/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:58:54 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/19 15:58:54 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << BOLDBLUE << "Default constructor for ClapTrap called." << RESET << std::endl;
    m_name = "";
    m_hitPoints = 10;
    m_energyPoints = 10;
    m_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << BOLDBLUE << "Constructor for ClapTrap called." << RESET << std::endl;
    m_name = name;
    m_hitPoints = 10;
    m_energyPoints = 10;
    m_attackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap const & ClapTrapACopier)
{
    std::cout << BLUE << "Copy constructor for ClapTrap called." << RESET << std::endl;
    m_name = ClapTrapACopier.m_name;
    m_hitPoints = ClapTrapACopier.m_hitPoints;
    m_energyPoints = ClapTrapACopier.m_energyPoints;
    m_attackDamage = ClapTrapACopier.m_attackDamage;
}

ClapTrap::~ClapTrap()
{
    std::cout << BOLDBLUE << "Destructor for ClapTrap called." << RESET << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & ClapTrapACopier)
{
    std::cout << BLUE << "Assignation operator for ClapTrap called." << RESET << std::endl;
    if (this != &ClapTrapACopier)
    {
        m_name = ClapTrapACopier.m_name;
        m_hitPoints = ClapTrapACopier.m_hitPoints;
        m_energyPoints = ClapTrapACopier.m_energyPoints;
        m_attackDamage = ClapTrapACopier.m_attackDamage;
    }
    return (*this);
}

////////////////////////////////////////////////////////////////////////////////

void    ClapTrap::attack(std::string const & target)
{
    if (m_hitPoints == 0 && m_energyPoints == 0)
    {
        std::cout << BOLDRED << "ClapTrap " << m_name << " cannot do anything." << RESET;
        std::cout << BOLDRED << " No hit points nor energy points left... :(" << RESET << std::endl;
    }
    else if (m_hitPoints == 0)
    {
        std::cout << BOLDRED << "ClapTrap " << m_name << " cannot do anything." << RESET;
        std::cout << BOLDRED << " No hit points left... :(" << RESET << std::endl;
    }
    else if (m_energyPoints == 0)
    {
        std::cout << BOLDRED << "ClapTrap " << m_name << " cannot do anything." << RESET;
        std::cout << BOLDRED << " No energy points left... :(" << RESET << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << m_name << " attacks " << target;
        std::cout << ", causing " << m_attackDamage;
        if (m_attackDamage == 0 || m_attackDamage == 1)
            std::cout << " point of damage!" << std::endl;
        else
            std::cout << " points of damage!" << std::endl;
    }
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << BOLDRED << "ClapTrap " << m_name << " takes " << amount << RESET;
    if (amount == 0 || amount == 1)
            std::cout << BOLDRED << " point of damage!" << RESET << std::endl;
        else
            std::cout << BOLDRED << " points of damage!" << RESET << std::endl;
    if ((int)m_hitPoints - (int)amount >= 0)
        m_hitPoints -= amount;
    else
        m_hitPoints = 0;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << BOLDGREEN << "ClapTrap " << m_name << " gets " << amount << RESET;
    if (amount == 0 || amount == 1)
        std::cout << BOLDGREEN << " hit point back!" << std::endl << RESET;
    else
        std::cout << BOLDGREEN << " hit points back!" << std::endl << RESET;
    m_hitPoints += amount;
}

unsigned int    ClapTrap::get_hitPoints()
{
    return (m_hitPoints);
}
