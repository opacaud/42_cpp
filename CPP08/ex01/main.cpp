/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 09:42:24 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/31 09:42:24 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void	addManyNumbers(std::vector<int> vec, unsigned int quantity);

int main()
{
	std::cout << BOLDBLUE << std::endl << "---------------------MAIN TEST DU SUJET---------------------" << RESET << std::endl;

    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << std::endl << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

	std::cout << BOLDBLUE << std::endl << "--------------------------CREATION--------------------------" << RESET << std::endl;

    Span sp1(3);

    try
    {
        sp1.addNumber(-250);
    }
    catch(const std::exception& e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }

    try
    {
        sp1.addNumber(40);
    }
    catch(const std::exception& e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }

    try
    {
        sp1.addNumber(36);
    }
    catch(const std::exception& e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }

    try
    {
        sp1.addNumber(18);
    }
    catch(const std::exception& e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }

	std::cout << BOLDBLUE << std::endl << "------------------------LONGEST SPAN------------------------" << RESET << std::endl;

    std::cout << std::endl << sp1;

    try
    {
        std::cout << std::endl << "sp1.longestSpan(): " << BOLDGREEN << sp1.longestSpan() << RESET << std::endl << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }

    std::cout << sp1;

    std::cout << std::endl << "-----------------" << std::endl;

    Span sp2(0);

    std::cout << sp2;

    try
    {
        std::cout << std::endl << "sp2.longestSpan(): " << sp2.longestSpan() << std::endl << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }

    std::cout << std::endl << "-----------------" << std::endl;

    Span sp3(1);
    sp3.addNumber(489);

    std::cout << std::endl << sp3;

    try
    {
        std::cout << std::endl << "sp3.longestSpan(): " << sp3.longestSpan() << std::endl << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }

    std::cout << std::endl << "-----------------" << std::endl;

    Span sp4(2);
    sp4.addNumber(20);
    sp4.addNumber(20);

    try
    {
        std::cout << std::endl << "sp4.longestSpan(): " << sp4.longestSpan() << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }

    std::cout << std::endl << "-----------------" << std::endl;

    Span sp5(2);
    sp5.addNumber(20);
    sp5.addNumber(21);

    try
    {
        std::cout << std::endl << "sp5.longestSpan(): " << sp5.longestSpan() << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }

    std::cout << std::endl << "-----------------" << std::endl;

    Span sp6(2);
    sp6.addNumber(21);
    sp6.addNumber(20);

    try
    {
        std::cout << std::endl << "sp6.longestSpan(): " << sp6.longestSpan() << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }

	std::cout << BOLDBLUE << std::endl << "-----------------------SHORTEST  SPAN-----------------------" << RESET << std::endl;

    std::cout << std::endl << sp1;

    try
    {
        std::cout << std::endl << "sp1.shortestSpan(): " << BOLDGREEN << sp1.shortestSpan() << RESET << std::endl << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }

    std::cout << sp1;

    std::cout << std::endl << "-----------------" << std::endl;

    std::cout << sp2;

    try
    {
        std::cout << std::endl << "sp2.shortestSpan(): " << sp2.shortestSpan() << std::endl << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }

    std::cout << std::endl << "-----------------" << std::endl;

    std::cout << std::endl << sp3;

    try
    {
        std::cout << std::endl << "sp3.shortestSpan(): " << sp3.shortestSpan() << std::endl << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }

    std::cout << std::endl << "-----------------" << std::endl;

    std::cout << std::endl << sp4;

    try
    {
        std::cout << std::endl << "sp4.shortestSpan(): " << sp4.shortestSpan() << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }
    
    std::cout << std::endl << "-----------------" << std::endl;

    std::cout << std::endl << sp5;

    try
    {
        std::cout << std::endl << "sp5.shortestSpan(): " << sp5.shortestSpan() << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }

    std::cout << std::endl << "-----------------" << std::endl;

    std::cout << std::endl << sp6;

    try
    {
        std::cout << std::endl << "sp6.shortestSpan(): " << sp6.shortestSpan() << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }

	std::cout << BOLDBLUE << std::endl << "-------------------------FILL  SPAN-------------------------" << RESET << std::endl << std::endl;

    Span sp7;

    std::cout << YELLOW << "Span sp7; + back_inserter 15000" << std::endl << std::endl;

    try
    {
        sp7.addManyNumbers_insert(sp7.getVecAddr(), 15000);
    }
    catch (std::exception & e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }
 
    std::cout << sp7 << std::endl;
 
    std::cout << "-----------------" << std::endl << std::endl;

    Span sp8(0);

    std::cout << YELLOW << "Span sp8(0); + vec.insert 15000" << std::endl << std::endl;

    try
    {
        sp8.addManyNumbers_vec(sp8.getVecAddr()->end(), 15000);
    }
    catch (std::exception & e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }

    std::cout << sp8 << std::endl;

    std::cout << "-----------------" << std::endl << std::endl;

    Span sp9(15000);

    std::cout << YELLOW << "Span sp9(15000); + back_inserter 15001" << RESET << std::endl << std::endl;

    try
    {
        sp9.addManyNumbers_insert(sp9.getVecAddr(), 15001);
    }
    catch (std::exception & e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }

    std::cout << sp9 << std::endl;
 
    std::cout << "-----------------" << std::endl << std::endl;

    std::cout << YELLOW << "Span sp9(15000); + vec.insert 10 + print" << RESET << std::endl << std::endl;

    try
    {
        sp9.addManyNumbers_vec(sp9.getVecAddr()->end(), 10);
    }
    catch (std::exception & e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }

    std::cout << sp9;

    std::cout << std::endl << "-----------------" << std::endl << std::endl;

    std::cout << YELLOW << "Span sp9(15000); rempli de 10 + back_inserter 14991 + print" << RESET << std::endl << std::endl;

    try
    {
        sp9.addManyNumbers_insert(sp9.getVecAddr(), 14991);
    }
    catch (std::exception & e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }

    std::cout << std::endl << "-----------------" << std::endl << std::endl;

    std::cout << YELLOW << "Span sp9(15000); rempli de 10 + vec.insert 10 + print" << RESET << std::endl << std::endl;

    try
    {
        sp9.addManyNumbers_vec(sp9.getVecAddr()->end(), 10);
    }
    catch (std::exception & e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }

    std::cout << sp9;

    // UNCOMMENT EVERYTHING BELLOW TO ADD A TEST FILLING THE WHOLE SPAN (15000 INT) WITH RANDOM NUMBERS AND THEN TRYING TO ADD ONE MORE

    // std::cout << std::endl << "-----------------" << std::endl << std::endl;

    // std::cout << YELLOW << "Span sp9(15000); rempli de 20 + back_inserter 14980 + print" << RESET << std::endl << std::endl;

    // try
    // {
    //     sp9.addManyNumbers_insert(sp9.getVecAddr(), 14980);
    // }
    // catch (std::exception & e)
    // {
    //     std::cout << BOLDRED << e.what() << RESET << std::endl;
    // }

    // std::cout << sp9;

    // std::cout << std::endl << "-----------------" << std::endl << std::endl;

    // std::cout << YELLOW << "Span sp9(15000); rempli de 15000 + vec.insert 1 + print" << RESET << std::endl << std::endl;

    // try
    // {
    //     sp9.addManyNumbers_vec(sp9.getVecAddr()->end(), 1);
    // }
    // catch (std::exception & e)
    // {
    //     std::cout << BOLDRED << e.what() << RESET << std::endl;
    // }

	std::cout << BOLDBLUE << std::endl << "--------------------------THE  END--------------------------" << RESET << std::endl << std::endl;

    return (0);
}
