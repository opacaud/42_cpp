/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:07:37 by opacaud           #+#    #+#             */
/*   Updated: 2022/02/03 15:18:34 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : m_type("Animal")
{
    std::cout << BOLDBLUE << "Default constructor for Animal called." << RESET << std::endl;
}

Animal::Animal(Animal const & AnimalACopier)
{
    std::cout << BLUE << "Copy constructor for Animal called." << RESET << std::endl;
	*this = AnimalACopier;
}

Animal::~Animal()
{
    std::cout << BOLDBLUE << "Destructor for Animal called." << RESET << std::endl;
}

Animal & Animal::operator=(Animal const & AnimalACopier)
{
    std::cout << BLUE << "Assignation operator for Animal called." << RESET << std::endl;
	if (this != &AnimalACopier)
	{
		m_type = AnimalACopier.getType();
	}
	return (*this);
}

////////////////////////////////////////////////////////////////////////////////

std::string	Animal::getType() const
{
	return (m_type);
}

void	Animal::makeSound() const
{
	std::cout << "I'm an animal" << std::endl;
}

Brain		*Animal::getBrain() const
{
	return (0);
}
