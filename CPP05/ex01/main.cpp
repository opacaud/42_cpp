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

int main()
{  
	std::cout << BOLDGREEN << std::endl << "-------------------BASIC  TESTS-------------------" << RESET << std::endl << std::endl;

    try
    {
        Form Easy("Easy", 150, 150);
        std::cout << Easy << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }
    std::cout << std::endl;

    try
    {
        Form Medium("Medium", 75, 75);
        std::cout << Medium << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }
    std::cout << std::endl;
    
    try
    {
        Form Hard("Hard", 1, 1);
        std::cout << Hard << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }

	std::cout << BOLDGREEN << std::endl << "-------------------WRONG  TESTS-------------------" << RESET << std::endl << std::endl;

    try
    {
        Form TooEasy("TooEasy", 151, 150);
        std::cout << TooEasy << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }
    std::cout << std::endl;

    try
    {
        Form TooHard("TooHard", 1, 0);
        std::cout << TooHard << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }

	std::cout << BOLDGREEN << std::endl << "------------------TESTS BESIGNED------------------" << RESET << std::endl << std::endl;

    try
    {
        Bureaucrat LowLife("LowLife", 150);  
        std::cout << LowLife << std::endl;
        Form AndYetIsEasy("AndYetIsEasy", 149, 149);
        std::cout << AndYetIsEasy << std::endl;
        AndYetIsEasy = AndYetIsEasy.beSigned(LowLife);
        std::cout << AndYetIsEasy << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }
    std::cout << std::endl;

    try
    {
        Bureaucrat BigBoss("BigBoss", 1);  
        std::cout << BigBoss << std::endl;
        Form HardestEver("HardestEver", 1, 1);
        std::cout << HardestEver << std::endl;
        HardestEver = HardestEver.beSigned(BigBoss);
        std::cout << HardestEver << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }

	std::cout << BOLDGREEN << std::endl << "------------------TESTS SIGNFORM------------------" << RESET << std::endl << std::endl;
	
    try
    {
        Bureaucrat LowLife("LowLife", 150);  
        std::cout << LowLife << std::endl;
        Form Medium("Medium", 75, 75);
        std::cout << Medium << std::endl;
        LowLife.signForm(Medium);
        std::cout << Medium << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }
    std::cout << std::endl;

    try
    {
        Bureaucrat NormalGuy("NormalGuy", 75);  
        std::cout << NormalGuy << std::endl;
        Form Medium("Medium", 75, 75);
        std::cout << Medium << std::endl;
        NormalGuy.signForm(Medium);
        std::cout << Medium << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }
    
    std::cout << BOLDGREEN << "---------------------THE  END---------------------" << RESET << std::endl << std::endl;

    return (0);
}
