/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 14:22:50 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/24 13:20:58 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << BOLDBLUE << "Default constructor for Brain called." << RESET << std::endl;
}

Brain::Brain(Brain const & BrainACopier)
{
	std::cout << BLUE << "Copy constructor for Brain called." << RESET << std::endl;
	*this = BrainACopier;
}

Brain::~Brain()
{
    std::cout << BOLDBLUE << "Destructor for Brain called." << RESET << std::endl;
}

Brain & Brain::operator=(Brain const & BrainACopier)
{
	std::cout << BLUE << "Assignation operator for Brain called." << RESET << std::endl;
	int	i;

	i = 0;
	if (this != &BrainACopier)
	{
		while (i < 100)
		{
			m_ideas[i] = BrainACopier.m_ideas[i];
			i++;
		}
	}
	return (*this);
}

////////////////////////////////////////////////////////////////////////////////

std::string	const	Brain::getIdea(int index)
{
	return (m_ideas[index]);
}

void				Brain::setIdea(int index, std::string idea)
{
	m_ideas[index] = idea;
}
