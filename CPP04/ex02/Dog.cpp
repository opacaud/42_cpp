/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:16:18 by opacaud           #+#    #+#             */
/*   Updated: 2022/02/03 15:34:29 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << BOLDBLUE << "Default constructor for Dog called." << RESET << std::endl;
	m_type = "Dog";
	m_brain = new Brain();
}

Dog::Dog(Dog const & DogACopier) : AAnimal(DogACopier)
{
    std::cout << BLUE << "Copy constructor for Dog called." << RESET << std::endl;
	*this = DogACopier;
}

Dog::~Dog()
{
    std::cout << BOLDBLUE << "Destructor for Dog called." << RESET << std::endl;
	delete m_brain;
}

Dog & Dog::operator=(Dog const & DogACopier)
{
    std::cout << BLUE << "Assignation operator for Dog called." << RESET << std::endl;
	if (this != &DogACopier)
	{
		m_type = DogACopier.getType();
		m_brain = new Brain(*DogACopier.m_brain);
	}
	return (*this);
}

////////////////////////////////////////////////////////////////////////////////

void	Dog::makeSound() const
{
	std::cout << "I'm a dog" << std::endl;	
}

Brain	*Dog::getBrain() const
{
	return (m_brain);
}
