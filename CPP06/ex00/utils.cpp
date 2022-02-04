/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 14:16:15 by opacaud           #+#    #+#             */
/*   Updated: 2022/02/03 15:37:28 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int howManyChar(std::string base, char c)
{
    int i;
    int count;

    count = 0;
    i = 0;
    while (base[i])
    {
        if (base[i] == c)
            count++;
        i++;
    }
    return (count);
}

double	pow(double nb, int exp)
{
	double	base;

	base = nb;
	while (exp > 1)
	{
		nb = nb * base;
		exp--;
	}
	return (nb);
}

double	ft_stod(std::string const &str)
{
    double        d_nb = 0.0;
    int            sign = 1;
    size_t        i = 0;
    bool        is_float = false;
    int            len;

    if (str.size() != 0 && (str[i] == '+' || str[i] == '-'))
    {
        if (str[i++] == '-')
        {
            sign = -1;
        }
    }
    while (i < str.size())
    {
        if (str[i] != '.' && str[i] != 'f')
        {
            d_nb = d_nb * 10 + str[i] - 48;
        }
        if (str[i] == 'f')
        {
            is_float = true;
        }
        i++;
    }
    size_t floatingPointIndex = str.find('.');
    len = is_float ? str.size() - 2 : str.size() - 1;

    if (floatingPointIndex != std::string::npos)
    {
        d_nb /= pow(10, len - floatingPointIndex); // to move the . to the right pos
    }

    return d_nb * sign;
}

int	onlyZerosAtTheEnd(std::string base)
{
	int	i;

	i = 0;
	while (base[i] && base[i] != '.')
		i++;
	i++;
	while (base[i])
	{
		if (base[i] != '0' && base[i] != 'f')
			return (0);
		i++;
	}
	return (1);
}
