/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:45:41 by opacaud           #+#    #+#             */
/*   Updated: 2022/02/09 17:18:21 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    // std::cout << BOLDBLUE << "Default constructor for MateriaSource called." << RESET << std::endl;
	int	i;
	
	i = 0;
	while (i < m_nb_in_memory)
	{
		m_memory[i] = 0;
		i++;
	}
}

MateriaSource::MateriaSource(MateriaSource const & MateriaSourceACopier)
{
	// std::cout << BLUE << "Copy constructor for MateriaSource called." << RESET << std::endl;
	*this = MateriaSourceACopier;
}

MateriaSource::~MateriaSource()
{
    // std::cout << BOLDBLUE << "Destructor for MateriaSource called." << RESET << std::endl;
	int	i;

	i = 0;
	while (i < m_nb_in_memory)
	{
		if (m_memory[i])
			delete m_memory[i];
		i++;
	}
}

MateriaSource & MateriaSource::operator=(MateriaSource const & MateriaSourceACopier)
{
    // std::cout << BLUE << "Assignation operator for MateriaSource called." << RESET << std::endl;
	int	i;

	if (this != &MateriaSourceACopier)
	{
		i = 0;
		while (MateriaSourceACopier.m_memory[i] && i < m_nb_in_memory)
		{
			if (m_memory[i])
				delete m_memory[i];
			m_memory[i] = MateriaSourceACopier.m_memory[i]->clone();
			i++;
		}
	}
	return (*this);
}

////////////////////////////////////////////////////////////////////////////////

void MateriaSource::learnMateria(AMateria* materia)
{
	int	i;

	i = 0;
	while (i < m_nb_in_memory && m_memory[i])
		i++;
	if (i == m_nb_in_memory)
	{
		std::cout << BOLDRED << "MEMORY OF MATERIA IS FULL" << RESET << std::endl;
		return ;
	}
	m_memory[i] = materia;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int	i;

	i = 0;
	while (i < m_nb_in_memory && m_memory[i])
	{
		if (type == m_memory[i]->getType())
		{
			return (m_memory[i]->clone());
		}
		i++;
	}
	return (0);
}
