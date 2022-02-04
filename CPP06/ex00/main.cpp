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

#include "Convert.hpp"

int main(int ac, char **av)
{
    if (ac != 2 || defType(av[1]) == "Invalid")
    {
        std::cout << "Usage: ./convert valid_number" << std::endl;
        return (0);
    }

    Convert base(av[1], defType(av[1]));

    base.print();

    return (0);
}
