/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:44:38 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/27 13:08:18 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    // std::cout << BOLDBLUE << "Default constructor for Intern called." << RESET << std::endl;
}

Intern::Intern(Intern const & InternACopier)
{
	// std::cout << BLUE << "Copy constructor for Intern called." << RESET << std::endl;
	(void)InternACopier;
}

Intern::~Intern()
{
	// std::cout << BOLDBLUE << "Destructor for Intern called." << RESET << std::endl;
}

Intern & Intern::operator=(Intern const & InternACopier)
{
	// std::cout << BLUE << "Assignation operator for Intern called." << RESET << std::endl;
	(void)InternACopier;
	return (*this);
}

////////////////////////////////////////////////////////////////////////////////

Form	*Intern::create_shrub_form(std::string target)
{
	Form	*res;

	res = new ShrubberyCreationForm(target);

	return (res);
}

Form	*Intern::create_rob_form(std::string target)
{
	Form	*res;

	res = new RobotomyRequestForm(target);

	return (res);
}

Form	*Intern::create_prez_form(std::string target)
{
	Form	*res;

	res = new PresidentialPardonForm(target);

	return (res);
}

Form	*Intern::makeForm(std::string name, std::string target)
{
	int         i;
    std::string form_tab[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form		*res;

	res = 0;
    Form *(Intern::*function_ptr[3]) (std::string target) =
    {
        function_ptr[0] = &Intern::create_shrub_form,
        function_ptr[1] = &Intern::create_rob_form,
        function_ptr[2] = &Intern::create_prez_form,
    };
    i = 0;
    while (i < 3)
    {
        if (form_tab[i] == name)
        {
            res = (this->*function_ptr[i])(target);
            break ;
        }
        i++;
    }
	if (i == 3)
	{
		std::cout << BOLDRED << "Intern does not know of such form: " << name << ". So sorry, master..." << RESET << std::endl;
		return (0);
	}
	std::cout << BOLDGREEN << "Intern creates the " << name << " form." << RESET << std::endl;
	return (res);
}
