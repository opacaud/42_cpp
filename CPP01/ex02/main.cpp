/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 14:24:51 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/13 14:24:51 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string brain = "HI THIS IS BRAIN";
    std::string *stringPTR = &brain;
    std::string &stringREF = brain;

    std::cout  << std::endl << "address of brain through brain    : " << &brain << std::endl;
    std::cout << "address of brain through pointer  : " << stringPTR << std::endl;
    std::cout << "address of brain through reference: " << &stringREF << std::endl << std::endl;

    std::cout << "content of brain through brain    : " << brain << std::endl;
    std::cout << "content of brain through pointer  : " << *stringPTR << std::endl;
    std::cout << "content of brain through reference: " << stringREF << std::endl << std::endl;

    return (0);
}
