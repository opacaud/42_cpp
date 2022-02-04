/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 13:23:53 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/31 08:46:58 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.hpp"

int isValid(std::string base)
{
    int i;

    i = 0;
    if (base.length() == 1 && ((base[0] >= 32 && base[0] < '0') || (base[0] > '9' && base[0] <= 126)))
        return (1);
    if (base == "- inff" || base == "-inff" || base == "+ inff" || base == "+inff" || base == "nanf"
        || base == "- inf" || base == "-inf" || base == "+ inf" || base == "+inf" || base == "nan")
        return (1);
    if (base[0] == '+' || base[0] == '-')
        i++;
    while(base[i])
    {
        if ((base[i] < '0' || base[i] > '9') && base[i] != 'f' && base[i] != '.')
            return (0);
        if (base[i] == 'f' && base[i + 1])
            return (0);
        if (base[i] == '.' && base[i + 1] == 0)
            return (0);
        i++;
    }
    return (1);
}

std::string defType(std::string base)
{
    if (base.length() == 0 || isValid(base) == 0
        || ((howManyChar(base, 'f') > 1 && base != "-inff" && base != "- inff"
            && base != "+inff" && base != "+ inff") || howManyChar(base, '.') > 1))
        return ("Invalid");
    if (base.length() == 1 && ((base[0] >= 32 && base[0] < '0') || (base[0] > '9' && base[0] <= 126)))
        return ("char");
    if ((howManyChar(base, 'f') == 1 && (base != "- inf") && (base != "-inf")
        && (base != "+ inf") && (base != "+inf"))
        || base == "- inff" || base == "-inff" || base == "+ inff"
        || base == "+inff" || base == "nanf")
        return ("float");
    if (howManyChar(base, '.') == 1 || base == "- inf" || base == "-inf"
        || base == "+ inf" || base == "+inf" || base == "nan")
        return ("double");
    return ("int");
}
