/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:16:18 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/21 14:17:56 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << BOLDBLUE << "Default constructor for Dog called." << RESET << std::endl;
	m_type = "Dog";
}

Dog::Dog(Dog const & DogACopier) : Animal(DogACopier)
{
	std::cout << BLUE << "Copy constructor for Dog called." << RESET << std::endl;

	*this = DogACopier;
}

Dog::~Dog()
{
    std::cout << BOLDBLUE << "Destructor for Dog called." << RESET << std::endl;
}

Dog & Dog::operator=(Dog const & DogACopier)
{
    std::cout << BLUE << "Assignation operator for Dog called." << RESET << std::endl;
	if (this != &DogACopier)
	{
		m_type = DogACopier.m_type;
	}
	return (*this);
}

////////////////////////////////////////////////////////////////////////////////

void	Dog::makeSound() const
{
	std::cout << "I'm a dog" << std::endl;	
}
