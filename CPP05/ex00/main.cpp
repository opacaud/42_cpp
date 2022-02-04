/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 11:14:34 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/26 11:14:34 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{  
	std::cout << BOLDGREEN << std::endl << "-------------------BASIC  TESTS-------------------" << RESET << std::endl << std::endl;

    try
    {
        Bureaucrat Alan("Alan", 1);
        std::cout << Alan << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }
    std::cout << std::endl;

    try
    {
        Bureaucrat Bob("Bob", 75);
        std::cout << Bob << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }
    std::cout << std::endl;
    
    try
    {
        Bureaucrat Charlie("Charlie", 150);
        std::cout << Charlie << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }

	std::cout << BOLDGREEN << std::endl << "-------------------WRONG  TESTS-------------------" << RESET << std::endl << std::endl;

    try
    {
        Bureaucrat Dan("Dan", 151);
        std::cout << Dan << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }
    std::cout << std::endl;

    try
    {
        Bureaucrat Evan("Evan", 0);
        std::cout << Evan << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }

	std::cout << BOLDGREEN << std::endl << "-----------------RIGHT EVOLUTIONS-----------------" << RESET << std::endl << std::endl;

    try
    {
        Bureaucrat BigBoss("BigBoss", 2);
        std::cout << BigBoss << std::endl;
        BigBoss.upgrade();
        std::cout << BigBoss << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }
    std::cout << std::endl;

    try
    {
        Bureaucrat LowLife("LowLife", 149);
        std::cout << LowLife << std::endl;
        LowLife.downgrade();
        std::cout << LowLife << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }

	std::cout << BOLDGREEN << std::endl << "-----------------WRONG EVOLUTIONS-----------------" << RESET << std::endl << std::endl;

    try
    {
        Bureaucrat BigBoss("BigBoss", 1);
        std::cout << BigBoss << std::endl;
        BigBoss.upgrade();
        std::cout << BigBoss << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }
    std::cout << std::endl;

    try
    {
        Bureaucrat LowLife("LowLife", 150);
        std::cout << LowLife << std::endl;
        LowLife.downgrade();
        std::cout << LowLife << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }

	std::cout << BOLDGREEN << std::endl << "---------------------THE  END---------------------" << RESET << std::endl << std::endl;

    return (0);
}
