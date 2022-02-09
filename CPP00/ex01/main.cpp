/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:25:49 by opacaud           #+#    #+#             */
/*   Updated: 2022/02/09 12:15:34 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>

int main()
{
    Phonebook   myphonebook;
    int         nb_contacts;
    std::string action;

    nb_contacts = 0;
    std::cout << std::endl << std::endl << BOLDBLUE << " ------------------- " << RESET << std::endl;
    std::cout << BOLDBLUE << " ----- WELCOME ----- " << RESET << std::endl;
    std::cout << BOLDBLUE << " ------------------- " << RESET << std::endl << std::endl;

    while (1)
    {
        std::cout << std::endl << "What do you want to do? ";
        std::cout << BOLDMAGENTA << "ADD" << RESET << ", ";
        std::cout << BOLDCYAN << "SEARCH" << RESET << " or ";
        std::cout << BOLDYELLOW << "EXIT" << RESET << "? ";
        std::getline (std::cin, action);
        if (action == "EXIT")
            return (0);
		else if (action == "ADD")
			myphonebook.ft_add_contact(&nb_contacts);
        else if (action == "SEARCH")
			myphonebook.ft_search_contact(nb_contacts);
        else
            std::cout << std::endl << BOLDRED << "Please choose one of the three actions: ADD, SEARCH or EXIT." << RESET << std::endl;
    }
    return (0);
}
