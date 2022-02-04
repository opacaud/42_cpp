/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:01:34 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/27 13:25:13 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", "", 25, 5)
{
    // std::cout << BOLDBLUE << "Default constructor for PresidentialPardonForm called." << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) : Form("PresidentialPardonForm", target, 25, 5)
{
	// std::cout << BOLDBLUE << "Constructor for PresidentialPardonForm called." << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & PresidentialPardonFormACopier) : Form(PresidentialPardonFormACopier)
{
    // std::cout << BLUE << "Copy constructor for PresidentialPardonForm called." << RESET << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	// if (m_name.length() > 0)
	//     std::cout << BOLDBLUE << "Destructor for PresidentialPardonForm " << m_name << " called." << RESET << std::endl;
	// else
	//     std::cout << BOLDBLUE << "Destructor for PresidentialPardonForm called." << RESET << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & PresidentialPardonFormACopier)
{
    // std::cout << BLUE << "Assignation operator for PresidentialPardonForm called." << RESET << std::endl;
	Form::operator=(PresidentialPardonFormACopier);
    return (*this);
}

////////////////////////////////////////////////////////////////////////////////

void	PresidentialPardonForm::execute (Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::cout << m_target << " has been graced by Zafod BeebleBrox." << std::endl;
}
