/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 13:35:44 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/21 14:19:30 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : m_type("WrongAnimal")
{
    std::cout << BOLDBLUE << "Default constructor for WrongAnimal called." << RESET << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & WrongAnimalACopier)
{
    std::cout << BLUE << "Copy constructor for WrongAnimal called." << RESET << std::endl;
	*this = WrongAnimalACopier;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << BOLDBLUE << "Destructor for WrongAnimal called." << RESET << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & WrongAnimalACopier)
{
    std::cout << BLUE << "Assignation operator for WrongAnimal called." << RESET << std::endl;
	if (this != &WrongAnimalACopier)
	{
		m_type = WrongAnimalACopier.m_type;
	}
	return (*this);
}

////////////////////////////////////////////////////////////////////////////////

std::string	WrongAnimal::getType() const
{
	return (m_type);	
}

void	WrongAnimal::makeSound() const
{
	std::cout << "I'm a WRONG animal" << std::endl;	
}
