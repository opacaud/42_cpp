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

#include "easyfind.hpp"

///////////////////////// MAIN FOR EASYFIND RETURNING AN ITERATOR /////////////////////////

int main()
{
    std::cout << std::endl << BOLDMAGENTA << "----------MAIN FOR EASYFIND RETURNING AN ITERATOR----------" << std::endl;

    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(4);
    vec.push_back(8);
    vec.push_back(16);
    vec.push_back(32);
    print(vec);

    std::vector<int>::iterator  it;

    try
    {
        std::cout << YELLOW << "easyfind(vec, 1)" << RESET << std::endl;
        it = easyfind(vec, 1);
        std::cout << BOLDGREEN << "Found. iterator: " << *it << RESET << std::endl << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }

    try
    {
        std::cout << YELLOW << "easyfind(vec, 8)" << RESET << std::endl;
        it = easyfind(vec, 8);
        std::cout << BOLDGREEN << "Found. iterator: " << *it << RESET << std::endl << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }

    try
    {
        std::cout << YELLOW << "easyfind(vec, 64)" << RESET << std::endl;
        it = easyfind(vec, 64);
        std::cout << BOLDGREEN << "Found. iterator: " << *it << RESET << std::endl << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }
    
    std::cout << std::endl << YELLOW << "pop_back()" << RESET << std::endl;
    vec.pop_back();
    print(vec);

    try
    {
        std::cout << YELLOW << "easyfind(vec, 32)" << RESET << std::endl;
        it = easyfind(vec, 32);
        std::cout << BOLDGREEN << "Found. iterator: " << *it << RESET << std::endl << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }

    std::cout << std::endl << YELLOW << "push_back(32)" << RESET << std::endl;
    vec.push_back(32);
    print(vec);

    try
    {
        std::cout << YELLOW << "easyfind(vec, 32)" << RESET << std::endl;
        it = easyfind(vec, 32);
        std::cout << BOLDGREEN << "Found. iterator: " << *it << RESET << std::endl << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << BOLDRED << e.what() << RESET << std::endl;
    }

    return (0);
}


///////////////////////// MAIN FOR EASYFIND RETURNING AN INT /////////////////////////


// int main()
// {
//     std::cout << std::endl << BOLDMAGENTA << "----------MAIN FOR EASYFIND RETURNING AN INT----------" << std::endl;

//     std::vector<int> vec;
//     vec.push_back(1);
//     vec.push_back(2);
//     vec.push_back(4);
//     vec.push_back(8);
//     vec.push_back(16);
//     vec.push_back(32);
//     print(vec);

//     int found;

//     try
//     {
//         std::cout << YELLOW << "easyfind(vec, 1)" << RESET << std::endl;
//         found = easyfind(vec, 1);
//         std::cout << BOLDGREEN << "Found. iterator: " << found << RESET << std::endl << std::endl;
//     }
//     catch(const std::exception& e)
//     {
//         std::cout << BOLDRED << e.what() << RESET << std::endl;
//     }

//     try
//     {
//         std::cout << YELLOW << "easyfind(vec, 8)" << RESET << std::endl;
//         found = easyfind(vec, 8);
//         std::cout << BOLDGREEN << "Found. iterator: " << found << RESET << std::endl << std::endl;
//     }
//     catch(const std::exception& e)
//     {
//         std::cout << BOLDRED << e.what() << RESET << std::endl;
//     }

//     try
//     {
//         std::cout << YELLOW << "easyfind(vec, 64)" << RESET << std::endl;
//         found = easyfind(vec, 64);
//         std::cout << BOLDGREEN << "Found. iterator: " << found << RESET << std::endl << std::endl;
//     }
//     catch(const std::exception& e)
//     {
//         std::cout << BOLDRED << e.what() << RESET << std::endl;
//     }
    
//     std::cout << std::endl << YELLOW << "pop_back()" << RESET << std::endl;
//     vec.pop_back();
//     print(vec);

//     try
//     {
//         std::cout << YELLOW << "easyfind(vec, 32)" << RESET << std::endl;
//         found = easyfind(vec, 32);
//         std::cout << BOLDGREEN << "Found. iterator: " << found << RESET << std::endl << std::endl;
//     }
//     catch(const std::exception& e)
//     {
//         std::cout << BOLDRED << e.what() << RESET << std::endl;
//     }

//     std::cout << std::endl << YELLOW << "push_back(32)" << RESET << std::endl;
//     vec.push_back(32);
//     print(vec);

//     try
//     {
//         std::cout << YELLOW << "easyfind(vec, 32)" << RESET << std::endl;
//         found = easyfind(vec, 32);
//         std::cout << BOLDGREEN << "Found. iterator: " << found << RESET << std::endl << std::endl;
//     }
//     catch(const std::exception& e)
//     {
//         std::cout << BOLDRED << e.what() << RESET << std::endl;
//     }

//     return (0);
// }
