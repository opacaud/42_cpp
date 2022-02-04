/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:16:26 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/21 14:20:38 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << BOLDBLUE << "Default constructor for Cat called." << RESET << std::endl;
	m_type = "Cat";
}

Cat::Cat(Cat const & CatACopier) : Animal(CatACopier)
{
	std::cout << BLUE << "Copy constructor for Cat called." << RESET << std::endl;
	*this = CatACopier;
}

Cat::~Cat()
{
	std::cout << BOLDBLUE << "Destructor for Cat called." << RESET << std::endl;
}

Cat & Cat::operator=(Cat const & CatACopier)
{
    std::cout << BLUE << "Assignation operator for Cat called." << RESET << std::endl;
	if (this != &CatACopier)
	{
		m_type = CatACopier.m_type;
	}
	return (*this);
}

////////////////////////////////////////////////////////////////////////////////

void	Cat::makeSound() const
{
	std::cout << "I'm a cat" << std::endl;	
}
