/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:00:47 by opacaud           #+#    #+#             */
/*   Updated: 2022/02/09 17:45:51 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	std::cout << BOLDMAGENTA << std::endl << "--------------------------CREATION--------------------------" << RESET << std::endl << std::endl;

	Array<int> array;

	std::cout << BOLDBLUE << "size: " << array.size() << RESET << std::endl;

	try
	{
        std::cout << "Trying to change value of array[0]." << RESET << std::endl;
		array[0] = 9;
        std::cout << BOLDGREEN << "Changed value of array[0]." << RESET << std::endl;
	}
	catch(std::exception &e)
	{
        std::cout << BOLDRED << e.what() << RESET << std::endl;
	}

	Array<int> array_overload(4);

	std::cout << BOLDBLUE << "size: " << array_overload.size() << RESET << std::endl;
	
	try
	{
        std::cout << "Trying to change value of array_overload[3]." << RESET << std::endl;
		array_overload[3] = 9;
        std::cout << BOLDGREEN << "Changed value of array_overload[3] to: " << array_overload[3] << "." << RESET << std::endl;
	}
	catch(std::exception &e)
	{
        std::cout << BOLDRED << e.what() << RESET << std::endl;
	}

	std::cout << BOLDMAGENTA << std::endl << "----------------------SET AVEC SETTERS----------------------" << RESET;
	std::cout << BOLDMAGENTA << std::endl << "|                            &&                            |" << RESET;
	std::cout << BOLDMAGENTA << std::endl << "----------------------GET AVEC GETTERS----------------------" << RESET << std::endl << std::endl;

	array_overload.set_array(0, 78);
	array_overload.set_array(1, 42);

	std::cout << "get_array_overload[0]: " << BOLDGREEN << array_overload.get_array(0) << RESET << std::endl;
	std::cout << "get_array_overload[1]: " << BOLDGREEN << array_overload.get_array(1) << RESET << std::endl;

	std::cout << BOLDMAGENTA << std::endl << "--------------------ASSIGNATION OPERATOR--------------------" << RESET << std::endl << std::endl;

	Array<int> array_copy;
	
	std::cout << BOLDYELLOW << "Copy" << std::endl;

	array_copy = array_overload;

	std::cout << BOLDYELLOW << "Change value in copy to 123456" << std::endl;

	array_copy.set_array(1, 123456);

	std::cout << BOLDYELLOW << "Print in original AND in copy :" << RESET << std::endl;

	std::cout << "Index[1] in original: "  << BOLDGREEN << array_overload.get_array(1) << RESET << std::endl;
	std::cout << "Index[1] in copy:     "  << BOLDGREEN << array_copy.get_array(1) << RESET << std::endl << std::endl;

	std::cout << BOLDMAGENTA << std::endl << "--------------------SET AVEC OPERATOR []--------------------" << RESET;
	std::cout << BOLDMAGENTA << std::endl << "|                            &&                            |" << RESET;
	std::cout << BOLDMAGENTA << std::endl << "--------------------GET AVEC OPERATOR []--------------------" << RESET << std::endl << std::endl;

	try
	{
        std::cout << BOLDGREEN << "Trying to change values." << RESET << std::endl;
		array_copy[1] = 987654;
		array_overload[3] = 4;
        std::cout << BOLDGREEN << "Values changed." << RESET << std::endl;
	}
	catch(std::exception &e)
	{
        std::cout << BOLDRED << e.what() << RESET << std::endl;
	}

	try
	{
        std::cout << BOLDGREEN << "Trying to change value." << RESET << std::endl;
		array_overload[4] = 100;
        std::cout << BOLDGREEN << "Value changed." << RESET << std::endl;
	}
	catch(std::exception &e)
	{
        std::cout << BOLDRED << e.what() << RESET << std::endl;
	}

	try
	{
        std::cout << BOLDGREEN << "Trying to print values." << RESET << std::endl;
		std::cout << array_copy[1] << std::endl;
		std::cout << array_overload[3] << std::endl;
        std::cout << BOLDGREEN << "Values printed." << RESET << std::endl;
	}
	catch(std::exception &e)
	{
        std::cout << BOLDRED << e.what() << RESET << std::endl;
	}

	try
	{
        std::cout << BOLDGREEN << "Trying to print value." << RESET << std::endl;
		std::cout << array_copy[5] << std::endl;
        std::cout << BOLDGREEN << "Value printed." << RESET << std::endl;
	}
	catch(std::exception &e)
	{
        std::cout << BOLDRED << e.what() << RESET << std::endl;
	}

	std::cout << BOLDMAGENTA << std::endl << "---------------------TESTS WITH STRINGS---------------------" << RESET << std::endl << std::endl;


	Array<std::string> array_str(3);

	array_str[0] = "Hello";
	array_str[1] = "World";
	array_str[2] = "!";

	try
	{
        std::cout << BOLDGREEN << "Trying to print values." << RESET << std::endl;
		std::cout << BOLDMAGENTA << array_str[0] << " " << array_str[1] << array_str[2] << " " << RESET << std::endl;
        std::cout << BOLDGREEN << "Values printed." << RESET << std::endl << std::endl;
	}
	catch(std::exception &e)
	{
        std::cout << BOLDRED << e.what() << RESET << std::endl;
	}

	try
	{
        std::cout << BOLDGREEN << "Trying to change value." << RESET << std::endl;
		array_str[1] = "brilliant corrector";
        std::cout << BOLDGREEN << "Value changed." << RESET << std::endl;
        std::cout << BOLDGREEN << "Trying to print values." << RESET << std::endl;
		std::cout << BOLDMAGENTA << array_str[0] << " " << array_str[1] << array_str[2] << " " << RESET << std::endl;
        std::cout << BOLDGREEN << "Values printed." << RESET << std::endl;
	}
	catch(std::exception &e)
	{
        std::cout << BOLDRED << e.what() << RESET << std::endl;
	}

	std::cout << BOLDMAGENTA << std::endl << "--------------------------THE  END--------------------------" << RESET << std::endl << std::endl;

	return (0);
}
