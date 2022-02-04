/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:25:42 by opacaud           #+#    #+#             */
/*   Updated: 2022/02/03 15:43:00 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
    // std::cout << BOLDBLUE << "Default constructor for Contact called." << RESET << std::endl;
    m_f_name = "";
    m_l_name = "";
    m_nickname = "";
    m_number = "";
    m_secret = "";
}

Contact::~Contact()
{
    // std::cout << BOLDBLUE << "Destructor for Contact called." << RESET << std::endl;
}

////////////////////////////////////////////////////////////////////////////////

void Contact::ft_set_f_name(std::string f_name)
{
    m_f_name = f_name;
}

void Contact::ft_set_l_name(std::string l_name)
{
    m_l_name = l_name;
}

void Contact::ft_set_nickname(std::string nickname)
{
    m_nickname = nickname;
}

void Contact::ft_set_number(std::string number)
{
    m_number = number;
}

void Contact::ft_set_secret(std::string secret)
{
    m_secret = secret;
}

std::string Contact::ft_get_f_name()
{
    return (m_f_name);
}

std::string Contact::ft_get_l_name()
{
    return (m_l_name);
}

std::string Contact::ft_get_nickname()
{
    return (m_nickname);
}

std::string Contact::ft_get_number()
{
    return (m_number);
}

std::string Contact::ft_get_secret()
{
    return (m_secret);
}
