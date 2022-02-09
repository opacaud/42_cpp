/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:01:34 by opacaud           #+#    #+#             */
/*   Updated: 2022/02/09 17:29:53 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", "", 72, 45)
{
    // std::cout << BOLDBLUE << "Default constructor for RobotomyRequestForm called." << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const & target) : Form("RobotomyRequestForm", target, 72, 45)
{
    // std::cout << BOLDBLUE << "Constructor for RobotomyRequestForm with target called." << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & RobotomyRequestFormACopier) : Form(RobotomyRequestFormACopier)
{
    // std::cout << BLUE << "Copy constructor for RobotomyRequestForm called." << RESET << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	// if (m_name.length() > 0)
	//     std::cout << BOLDBLUE << "Destructor for RobotomyRequestForm " << m_name << " called." << RESET << std::endl;
	// else
	//     std::cout << BOLDBLUE << "Destructor for RobotomyRequestForm called." << RESET << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & RobotomyRequestFormACopier)
{
	Form::operator=(RobotomyRequestFormACopier);
    return (*this);
    // std::cout << BLUE << "Assignation operator for RobotomyRequestForm called." << RESET << std::endl;
}

////////////////////////////////////////////////////////////////////////////////

void	RobotomyRequestForm::execute (Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::cout << BOLDGREEN << "BZBZZBZZZBZZZZZZ *PERCCCEUSSSSSSSSSE* BZBZZBZZZBZZZZZZ" << RESET << std::endl;
	srand(time(0));
	if (rand() % 2 == 0)
		std::cout << BOLDGREEN << m_target << " has been robotomized." << RESET << std::endl;
	else
		std::cout << BOLDGREEN << m_target << " has not been robotomized." << RESET << std::endl;
}
