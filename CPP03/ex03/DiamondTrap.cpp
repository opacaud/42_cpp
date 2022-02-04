/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:00:01 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/19 16:00:01 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <string>

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
    std::cout << BOLDBLUE << "Default constructor for DiamondTrap called." << RESET << std::endl;
    m_name = "";
    ClapTrap::m_name = "_clap_name";
    m_hitPoints = FragTrap::m_frag_hitPoints;        // 100
    m_energyPoints = ScavTrap::m_scav_energyPoints;  // 50
    m_attackDamage = FragTrap::m_frag_attackDamage;  // 30
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	std::cout << BOLDBLUE << "Constructor for DiamondTrap called." << RESET << std::endl;
    m_name = name;
    ClapTrap::m_name = name + "_clap_name";
    m_hitPoints = FragTrap::m_frag_hitPoints;        // 100
    m_energyPoints = ScavTrap::m_scav_energyPoints;  // 50
    m_attackDamage = FragTrap::m_frag_attackDamage;  // 30
    // std::cout << "m_name: " << m_name << std::endl;
    // std::cout << "m_hit: " << m_hitPoints << std::endl;
    // std::cout << "m_energy: " << m_energyPoints << std::endl;
    // std::cout << "m_attack: " << m_attackDamage << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & DiamondTrapACopier) : ClapTrap(DiamondTrapACopier), ScavTrap(DiamondTrapACopier), FragTrap(DiamondTrapACopier)
{
    std::cout << BLUE << "Assignation operator for DiamondTrap called." << RESET << std::endl;
    *this = DiamondTrapACopier;
    // std::cout << "m_name: " << m_name << std::endl;
    // std::cout << "m_hit: " << m_hitPoints << std::endl;
    // std::cout << "m_energy: " << m_energyPoints << std::endl;
    // std::cout << "m_attack: " << m_attackDamage << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << BOLDBLUE << "Destructor for DiamondTrap called." << RESET << std::endl;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & DiamondTrapACopier)
{
    std::cout << BLUE << "Assignation operator for DiamondTrap called." << RESET << std::endl;
    if (this != &DiamondTrapACopier)
    {
        m_name = DiamondTrapACopier.m_name;
        m_hitPoints = DiamondTrapACopier.m_hitPoints;
        m_energyPoints = DiamondTrapACopier.m_energyPoints;
        m_attackDamage = DiamondTrapACopier.m_attackDamage;
    }
    return (*this);
}

////////////////////////////////////////////////////////////////////////////////

void    DiamondTrap::attack(std::string const & target)
{
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI()
{
    std::cout << "Hey! My name is " << m_name;
    std::cout << " and my ClapTrap name is " << ClapTrap::m_name << "!" << std::endl;
}
