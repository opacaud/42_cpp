/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 09:59:26 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/25 09:38:19 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    // std::cout << BOLDBLUE << "Default constructor for Cure called." << RESET << std::endl;
	m_type = "cure";
}

Cure::Cure(Cure const & CureACopier) : AMateria(CureACopier)
{
	// std::cout << BLUE << "Copy constructor for Cure called." << RESET << std::endl;
	*this = CureACopier;
}

Cure::~Cure()
{
    // std::cout << BOLDBLUE << "Destructor for Cure called." << RESET << std::endl;
}

Cure & Cure::operator=(Cure const & CureACopier)
{
    // std::cout << BLUE << "Assignation operator for Cure called." << RESET << std::endl;
	if (this != &CureACopier)
	{
		m_type = CureACopier.getType();
	}
	return (*this);
}

////////////////////////////////////////////////////////////////////////////////

std::string	Cure::getType() const
{
	return (m_type);
}

AMateria* Cure::clone() const
{
	Cure	*new_one;

	new_one = new Cure(*this);

	return(new_one);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
