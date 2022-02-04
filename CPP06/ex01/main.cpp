/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:29:15 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/28 16:23:31 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main()
{
	Data		*data_before;
	Data		*data_after;
	uintptr_t	raw;

	data_before = new Data;
	data_after = new Data;
	data_before->str = "HELLOOOOOOO!!!!!";
	data_after->str = "I'm waitiiiiiiiing!!!!!";
	raw = 0;

	std::cout << "String in before struct: " << data_before->str << std::endl;
	std::cout << "String in after struct: " << data_after->str << std::endl;
	raw = serialize(data_before);
	data_after->str = deserialize(raw)->str;
	std::cout << "String in after struct: " << data_after->str << std::endl;

	delete data_after;
	delete data_before;
}
