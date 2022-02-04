/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:26:12 by opacaud           #+#    #+#             */
/*   Updated: 2022/02/03 15:26:12 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int ft_isnum(std::string index)
{
    int i;

    i = 0;
    if (index == "")
        return (0);
    while (index[i])
    {
        if (index[i] < '0' || index[i] > '9')
            return (0);
        i++;
    }
    return (1);
}

int ft_atoi(std::string word)
{
    int res;
    int i;

    res = 0;
    i = 0;
    while (word[i])
    {
        res = res * 10 + word[i] - '0';
        i++;
    }
    return (res);
}
