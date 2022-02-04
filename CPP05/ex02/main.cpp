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

int main()
{  
	std::cout << BOLDGREEN << std::endl << "-------------------WRONG  TESTS-------------------" << RESET << std::endl << std::endl;

    try
    {
        Bureaucrat LowGuy("LowGuy", 144);
        std::cout << LowGuy << std::endl;
        ShrubberyCreationForm Shrub("TARGET1");
        std::cout << Shrub << std::endl;
        Shrub.execute(LowGuy);
    }
    catch (std::exception & e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }

	std::cout << std::endl << "----------------------------------------------------------------------------------------------------" << std::endl << std::endl;

    try
    {
        Bureaucrat NormalGuy("NormalGuy", 71);
        std::cout << NormalGuy << std::endl;
        RobotomyRequestForm Rob("TARGET2");
        std::cout << Rob << std::endl;
        NormalGuy.signForm(Rob);
        std::cout << Rob << std::endl;
        Rob.execute(NormalGuy);
    }
    catch (std::exception & e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }

    std::cout << std::endl << "----------------------------------------------------------------------------------------------------" << std::endl << std::endl;

    try
    {
        Bureaucrat NormalGuy("NormalGuy", 71);
        std::cout << NormalGuy << std::endl;
        RobotomyRequestForm Rob("TARGET3");
        std::cout << Rob << std::endl;
        NormalGuy.signForm(Rob);
        std::cout << Rob << std::endl;
        NormalGuy.executeForm(Rob);
    }
    catch (std::exception & e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }

	std::cout << BOLDGREEN << std::endl << "------------------EXECUTE  TESTS------------------" << RESET << std::endl << std::endl;

    try
    {
        Bureaucrat LowGuy("LowGuy", 136);
        std::cout << LowGuy << std::endl;
        ShrubberyCreationForm Shrub("TARGET_FOR_SHRUB_EXECUTE");
        std::cout << Shrub << std::endl;
        LowGuy.signForm(Shrub);
        std::cout << Shrub << std::endl;
        Shrub.execute(LowGuy);
    }
    catch (std::exception & e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }

	std::cout << std::endl << "----------------------------------------------------------------------------------------------------" << std::endl << std::endl;

    try
    {
        Bureaucrat NormalGuy("NormalGuy", 44);
        std::cout << NormalGuy << std::endl;
        RobotomyRequestForm Rob("TARGET2");
        std::cout << Rob << std::endl;
        NormalGuy.signForm(Rob);
        std::cout << Rob << std::endl;
        Rob.execute(NormalGuy);
    }
    catch (std::exception & e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }

	std::cout << std::endl << "----------------------------------------------------------------------------------------------------" << std::endl << std::endl;

    try
    {
        Bureaucrat AllMight("HighGuy", 4);
        std::cout << AllMight << std::endl;
        PresidentialPardonForm Prez("TARGET3");
        std::cout << Prez << std::endl;
        AllMight.signForm(Prez);
        std::cout << Prez << std::endl;
        Prez.execute(AllMight);
    }
    catch (std::exception & e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }

	std::cout << BOLDGREEN << std::endl << "----------------EXECUTEFORM  TESTS----------------" << RESET << std::endl << std::endl;

    try
    {
        Bureaucrat LowGuy("LowGuy", 136);
        std::cout << LowGuy << std::endl;
        ShrubberyCreationForm Shrub("TARGET_FOR_SHRUB_EXECUTE_FORM");
        std::cout << Shrub << std::endl;
        LowGuy.signForm(Shrub);
        std::cout << Shrub << std::endl;
        LowGuy.executeForm(Shrub);
    }
    catch (std::exception & e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }

	std::cout << std::endl << "----------------------------------------------------------------------------------------------------" << std::endl << std::endl;

    try
    {
        Bureaucrat NormalGuy("NormalGuy", 44);
        std::cout << NormalGuy << std::endl;
        RobotomyRequestForm Rob("TARGET2");
        std::cout << Rob << std::endl;
        NormalGuy.signForm(Rob);
        std::cout << Rob << std::endl;
        NormalGuy.executeForm(Rob);
    }
    catch (std::exception & e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }

	std::cout << std::endl << "----------------------------------------------------------------------------------------------------" << std::endl << std::endl;

    try
    {
        Bureaucrat AllMight("HighGuy", 4);
        std::cout << AllMight << std::endl;
        PresidentialPardonForm Prez("TARGET3");
        std::cout << Prez << std::endl;
        AllMight.signForm(Prez);
        std::cout << Prez << std::endl;
        AllMight.executeForm(Prez);
    }
    catch (std::exception & e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }

    std::cout << BOLDGREEN << std::endl << "---------------------THE  END---------------------" << RESET << std::endl << std::endl;

    return (0);
}
