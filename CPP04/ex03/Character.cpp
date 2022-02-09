/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 10:35:26 by opacaud           #+#    #+#             */
/*   Updated: 2022/02/09 17:17:42 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    // std::cout << BOLDBLUE << "Default constructor for Character called." << RESET << std::endl;
	int	i;

	m_name = "";
	i = 0;
	while (i < m_nb_in_inventory)
	{
		m_inventory[i] = 0;
		i++;
	}
}

Character::Character(std::string name)
{
	// std::cout << BOLDBLUE << "Constructor for Character called." << RESET << std::endl;
	int	i;
	
	m_name = name;
	i = 0;
	while (i < m_nb_in_inventory)
	{
		m_inventory[i] = 0;
		i++;
	}
}

Character::Character(Character const & CharacterACopier)
{
	// std::cout << BLUE << "Copy constructor for Character called." << RESET << std::endl;
	int i;
	
	m_name = CharacterACopier.getName();
	i = 0;
	while (i < m_nb_in_inventory)
	{
		m_inventory[i] = CharacterACopier.m_inventory[i]->clone();
		i++;
	}
}

Character::~Character()
{
    // std::cout << BOLDBLUE << "Destructor for Character called." << RESET << std::endl;
	int	i;

	i = 0;
	while (i < m_nb_in_inventory)
	{
		if (m_inventory[i])
		{
			delete m_inventory[i];
			m_inventory[i] = 0;
		}
		i++;
	}
}

Character & Character::operator=(Character const & CharacterACopier)
{
    // std::cout << BLUE << "Assignation operator for Character called." << RESET << std::endl;
	int	i;
	if (this != &CharacterACopier)
	{
		m_name = CharacterACopier.getName();
		i = 0;
		while (CharacterACopier.m_inventory[i] && i < m_nb_in_inventory)
		{
			if (m_inventory[i])
				delete m_inventory[i];
			m_inventory[i] = CharacterACopier.m_inventory[i]->clone();
			i++;
		}
	}
	return (*this);
}

////////////////////////////////////////////////////////////////////////////////

std::string const & Character::getName() const
{
	return (m_name);
}

void	Character::equip(AMateria* m)
{
	int	i;

	i = 0;
	while (i < m_nb_in_inventory && m_inventory[i])
		i++;
	if (i == m_nb_in_inventory)
	{
		std::cout << BOLDRED << "INVENTORY IS FULL" << RESET << std::endl;
		return ;
	}
	m_inventory[i] = m;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
		m_inventory[idx] = 0;
}

void	Character::use(int idx, ICharacter& target)
{
	if (m_inventory[idx] && idx >=0 && idx <= 3)
		m_inventory[idx]->use(target);
	else if (!m_inventory[idx] && idx >=0 && idx <= 3)
		std::cout << BOLDRED << "Select a valid materia in inventory" << RESET << std::endl;
}
