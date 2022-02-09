/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:25:55 by opacaud           #+#    #+#             */
/*   Updated: 2022/02/09 12:17:47 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "utils.hpp"
#include <iostream>
#include <string>
#include <iomanip>

Phonebook::Phonebook()
{
    // std::cout << BOLDBLUE << "Default constructor for Phonebook called." << RESET << std::endl;
}

Phonebook::~Phonebook()
{
    // std::cout << BOLDBLUE << "Destructor for Phonebook called." << RESET << std::endl;
}

////////////////////////////////////////////////////////////////////////////////

void	Phonebook::ft_add_contact(int *nb_contacts)
{
	std::string	f_name;
    std::string	l_name;
    std::string	nickname;
    std::string	number;
    std::string	secret;

	if (*nb_contacts == 8)
		std::cout << std::endl << BOLDRED << "Your phonebook is full. You are only allowed eight contacts." << RESET << std::endl;
	else
	{
		std::cout << std::endl << BOLDMAGENTA << "What's your new contact's first name? " << RESET;
		std::getline (std::cin, f_name);
		std::cout << BOLDMAGENTA << "What's your new contact's last name? " << RESET;
		std::getline (std::cin, l_name);
		std::cout << BOLDMAGENTA << "What's your new contact's nickname? " << RESET;
		std::getline (std::cin, nickname);
		std::cout << BOLDMAGENTA << "What's your new contact's phone number? " << RESET;
		std::getline (std::cin, number);
		std::cout << BOLDMAGENTA << "What's your new contact's darkest secret? " << RESET;
		std::getline (std::cin, secret);
		m_contact_tab[(*nb_contacts)].ft_set_f_name(f_name);
		m_contact_tab[(*nb_contacts)].ft_set_l_name(l_name);
		m_contact_tab[(*nb_contacts)].ft_set_nickname(nickname);
		m_contact_tab[(*nb_contacts)].ft_set_number(number);
		m_contact_tab[(*nb_contacts)].ft_set_secret(secret);
		(*nb_contacts)++;
	}
}

std::string	ft_adapt_width(std::string word)
{
	if (word.length() <= 10)
		return (word);
	else
		return (word.substr(0, 9) + ".");
}

void	ft_print_list(Contact contact_tab[], int nb_contacts)
{
	int	i;

    std::cout << std::endl << BOLDWHITE << "     index|first name| last name|  nickname|" << RESET << std::endl;
	i = 1;
	while (i <= nb_contacts && i < 9)
	{
		std::cout << std::setfill(' ') << std::setw(10) << i - 1 << "|";
		std::cout << std::setfill(' ') << std::setw(10) << ft_adapt_width(contact_tab[i - 1].ft_get_f_name()) << "|";
		std::cout << std::setfill(' ') << std::setw(10) << ft_adapt_width(contact_tab[i - 1].ft_get_l_name()) << "|";
		std::cout << std::setfill(' ') << std::setw(10) << ft_adapt_width(contact_tab[i - 1].ft_get_nickname()) << "|";
		std::cout << std::endl;
		i++;
	}
}

void	ft_print_contact(Contact contact_tab[], int index)
{
	std::cout << std::endl << "First name: " << contact_tab[index].ft_get_f_name() << std::endl;
	std::cout << "Last name: " << contact_tab[index].ft_get_l_name() << std::endl;
	std::cout << "Nickname: " << contact_tab[index].ft_get_nickname() << std::endl;
	std::cout << "Phone number: " << contact_tab[index].ft_get_number() << std::endl;
	std::cout << "Darkest secret: " << contact_tab[index].ft_get_secret() << std::endl;
}

void    Phonebook::ft_search_contact(int nb_contacts)
{
    std::string	search_index;

	if (nb_contacts == 0)
		std::cout << std::endl << BOLDRED << "No contact to show." << RESET << std::endl;
	else
	{
		while (1)
		{
			ft_print_list(Phonebook::m_contact_tab, nb_contacts);
			std::cout << std::endl << BOLDCYAN << "What is the index of the contact you are searching for? " << RESET;
			std::getline (std::cin, search_index);
			if (ft_isnum(search_index) == 0 || ft_atoi(search_index) >= nb_contacts)
				std::cout << std::endl << BOLDRED << "---> Please enter a number that is assigned to a contact down here:" << RESET << std::endl;
			else
			{
				ft_print_contact(Phonebook::m_contact_tab, ft_atoi(search_index));
				break ;
			}
		}
	}
}
