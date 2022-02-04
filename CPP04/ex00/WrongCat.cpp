/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 13:33:26 by opacaud           #+#    #+#             */
/*   Updated: 2022/02/03 15:50:01 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << BOLDBLUE << "Default constructor for WrongCat called." << RESET << std::endl;
	m_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const & WrongCatACopier) : WrongAnimal(WrongCatACopier)
{
	std::cout << BLUE << "Copy constructor for WrongCat called." << RESET << std::endl;
	*this = WrongCatACopier;
}

WrongCat::~WrongCat()
{
	std::cout << BOLDBLUE << "Destructor for WrongCat called." << RESET << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const & WrongCatACopier)
{
    std::cout << BLUE << "Assignation operator for WrongCat called." << RESET << std::endl;
	if (this != &WrongCatACopier)
	{
		m_type = WrongCatACopier.m_type;
	}
	return (*this);
}

////////////////////////////////////////////////////////////////////////////////

void	WrongCat::makeSound() const
{
	std::cout << "I'm a WRONG cat" << std::endl;	
}
