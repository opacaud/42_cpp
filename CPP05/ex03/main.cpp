/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 11:15:01 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/26 11:15:01 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	std::cout << BOLDGREEN << std::endl << "--------------MAIN TEST FROM SUBJECT--------------" << RESET << std::endl << std::endl;

    Intern someRandomIntern;
    Form* rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    delete rrf;

	std::cout << BOLDGREEN << std::endl << "--------------------WRONG TEST--------------------" << RESET << std::endl << std::endl;

    Intern  Slave;
    Form    *form;

    form = Slave.makeForm("what form", "Alpha");
    delete form;

	std::cout << BOLDGREEN << std::endl << "-------------------BASIC  TESTS-------------------" << RESET << std::endl << std::endl;

    form = Slave.makeForm("shrubbery creation", "Bravo");
    delete form;
    form = Slave.makeForm("robotomy request", "Charlie");
    delete form;
    form = Slave.makeForm("presidential pardon", "Delta");
    delete form;

	std::cout << BOLDGREEN << std::endl << "---------------------CHECKING---------------------" << RESET << std::endl << std::endl;

    Bureaucrat LowLife("LowLife", 144);
    Bureaucrat LowLifePlus("LowLifePlus", 136);
    form = Slave.makeForm("shrubbery creation", "Bravo");
    std::cout << *form << std::endl;
    std::cout << LowLife << std::endl;
    LowLife.signForm(*form);
    LowLife.executeForm(*form);
    std::cout << LowLifePlus << std::endl;
    LowLifePlus.executeForm(*form);
    delete form;

	std::cout << std::endl << "--------------------------------------------------------------------------------------------" << std::endl << std::endl;

    Bureaucrat NormalGuy("NormalGuy", 71);
    Bureaucrat NormalGuyPlus("NormalGuyPlus", 44);
    form = Slave.makeForm("robotomy request", "Charlie");
    std::cout << *form << std::endl;
    std::cout << NormalGuy << std::endl;
    NormalGuy.signForm(*form);
    NormalGuy.executeForm(*form);
    std::cout << NormalGuyPlus << std::endl;
    NormalGuyPlus.executeForm(*form);
    delete form;

	std::cout << std::endl << "--------------------------------------------------------------------------------------------" << std::endl << std::endl;

    Bureaucrat AllMight("AllMight", 24);
    Bureaucrat AllMightPlus("AllMightPlus", 4);
    form = Slave.makeForm("presidential pardon", "Delta");
    std::cout << *form << std::endl;
    std::cout << AllMight << std::endl;
    AllMight.signForm(*form);
    AllMight.executeForm(*form);
    std::cout << AllMightPlus << std::endl;
    AllMightPlus.executeForm(*form);
    delete form;

    std::cout << BOLDGREEN << std::endl << "---------------------THE  END---------------------" << RESET << std::endl << std::endl;
    
    return (0);
}
