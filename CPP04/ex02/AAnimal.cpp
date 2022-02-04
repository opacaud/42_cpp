/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:07:37 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/24 13:48:00 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : m_type("AAnimal")
{
    std::cout << BOLDBLUE << "Default constructor for AAnimal called." << RESET << std::endl;
}

AAnimal::AAnimal(AAnimal const & AAnimalACopier)
{
	std::cout << BLUE << "Copy constructor for AAnimal called." << RESET << std::endl;
	*this = AAnimalACopier;
}

AAnimal::~AAnimal()
{
    std::cout << BOLDBLUE << "Destructor for AAnimal called." << RESET << std::endl;
}

AAnimal & AAnimal::operator=(AAnimal const & AAnimalACopier)
{
    std::cout << BLUE << "Assignation operator for AAnimal called." << RESET << std::endl;
	if (this != &AAnimalACopier)
	{
		m_type = AAnimalACopier.getType();
	}
	return (*this);
}

////////////////////////////////////////////////////////////////////////////////

std::string	AAnimal::getType() const
{
	return (m_type);
}

void	AAnimal::makeSound() const
{
	std::cout << "I'm an animal" << std::endl;
}

Brain		*AAnimal::getBrain() const
{
	return (0);
}
