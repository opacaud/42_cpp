/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 10:29:22 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/31 10:29:22 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void    ft_print_plus_one(const int & value)
{
    std::cout << value + 1 << " ";
}

int main()
{
	std::cout << BOLDRED << std::endl << "--------------------------TEST INT--------------------------" << RESET << std::endl << std::endl;

    int int_array[] = {0, 1, 2, 3, 4};
    int size = 5;

    std::cout << RED << "SPACES : " << RESET << std::endl;
    iter(int_array, size, ft_print_space);
    std::cout << std::endl << std::endl;
    
    std::cout << RED << "PLUS ONE : " << RESET << std::endl;
    iter(int_array, size, ft_print_plus_one);
    std::cout << std::endl;
	
    std::cout << BOLDRED << std::endl << "------------------------TEST  STRING------------------------" << RESET << std::endl << std::endl;

    std::string str_array[] = {"BONJOOOUUUR !!!", "Comment ca va ?", "Bien evidemment.", "Moi aussi ! :D"};
    size = 4;

    std::cout << RED << "NEW LINE : " << RESET << std::endl;
    iter(str_array, size, ft_print_endl);

	std::cout << BOLDRED << std::endl << "--------------------------THE  END--------------------------" << RESET << std::endl << std::endl;

    return (0);
}
