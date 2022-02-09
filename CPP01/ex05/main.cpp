/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 14:25:48 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/13 14:25:48 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main()
{
    Karen   karen;
    
    karen.complain("debug");

    karen.complain("info");
    
    karen.complain("warning");
    
    karen.complain("error");

    return (0);
}
