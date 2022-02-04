/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 14:26:14 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/13 14:26:14 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int ac, char **av)
{
    Karen   karen;

    if (ac != 2 || ((std::string)av[1]).length() == 0)
    {
        std::cout << "Usage: ./karenFilter \"DEBUG\" or \"INFO\" or \"WARNING\" or \"ERROR\" or something else." << std::endl;
        return (0);
    }

    karen.complain( av[1] );

    return (0);
}
