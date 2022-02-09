/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 09:17:03 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/31 09:17:03 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <typeinfo>
#include <exception>

Base    *generate(void)
{
    srand(time(0));
    if (rand() % 3 == 1)
        return (new A());
    else if (rand() % 3 == 2)
        return (new B());
    else
        return (new C());
}

void identify_p(Base * p)
{
    Base *cmp;

    cmp = dynamic_cast<A *>(p);
    if (cmp)
    {
        std::cout << BOLDCYAN << "Base is type A." << RESET << std::endl;
        return ;
    }

    cmp = dynamic_cast<B *>(p);
    if (cmp)
    {
        std::cout << BOLDBLUE << "Base is type B." << RESET << std::endl;
        return ;
    }

    cmp = dynamic_cast<C *>(p);
    if (cmp)
    {
        std::cout << BOLDMAGENTA << "Base is type C." << RESET << std::endl;
        return ;
    }
}

void identify_r(Base & p)
{
    int is_a;
    int is_b;
    int is_c;

    is_a = 1;
    is_b = 1;
    is_c = 1;

    try
    {
        Base & cmp = dynamic_cast<A &>(p);
        (void)cmp;
    }
    catch(std::bad_cast& bc)
    {
        is_a = 0;
    }

    try
    {
        Base & cmp = dynamic_cast<B &>(p);
        (void)cmp;
    }
    catch(std::bad_cast& bc)
    {
        is_b = 0;
    }

    try
    {
        Base & cmp = dynamic_cast<C &>(p);
        (void)cmp;
    }
    catch(std::bad_cast& bc)
    {
        is_c = 0;
    }

    if (is_a)
        std::cout << BOLDCYAN << "Base is type A." << RESET << std::endl;
    else if (is_b)
        std::cout << BOLDBLUE << "Base is type B." << RESET << std::endl;
    else if (is_c)
        std::cout << BOLDMAGENTA << "Base is type C." << RESET << std::endl;
}

int main()
{
    Base    *test;

    test = generate();

    std::cout << std::endl;

    identify_p(test);
    identify_r(*test);

    std::cout << std::endl << BOLDGREEN << "Run it again and again. Type should change randomly." << RESET << std::endl << std::endl;
}
