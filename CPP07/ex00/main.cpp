/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 09:42:24 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/31 09:42:24 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main()
{
    int a = 2;
    int b = 3;

    std::cout << RED << "AVANT : " << RESET << "a = " << a << ", b = " << b << std::endl;
    std::cout << YELLOW << "---> swap called." << RESET << std::endl;
    ::swap( a, b );
    std::cout << GREEN << "APRES : " << RESET << "a = " << a << ", b = " << b << std::endl;
    std::cout << YELLOW << "---> min called." << RESET << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << YELLOW << "---> max called." << RESET << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl << std::endl;

    a = 42;
    b = 42;
    std::cout << RED << "Identiques : " << RESET << "a = " << a << ", b = " << b << std::endl;
    std::cout << "Adresses : " << RESET << "a : " << &a << ", b : " << &b << std::endl;
    std::cout << YELLOW << "---> min called." << RESET << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "Adresse du retour : " << &::min( a, b ) << std::endl;
    std::cout << YELLOW << "---> max called." << RESET << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::cout << "Adresse du retour : " << &::max( a, b ) << std::endl << std::endl;
    
    std::string c = "chaine1";
    std::string d = "chaine2";
    
    std::cout << RED << "AVANT : " << RESET << "c = " << c << ", d = " << d << std::endl;
    std::cout << YELLOW << "---> swap called." << RESET << std::endl;
    ::swap(c, d);
    std::cout << GREEN << "APRES : " << RESET << "c = " << c << ", d = " << d << std::endl;
    std::cout << YELLOW << "---> min called." << RESET << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << YELLOW << "---> max called." << RESET << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    
    return (0);
}
