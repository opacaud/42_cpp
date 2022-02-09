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

    std::cout << std::endl << BOLDRED << "AVANT : " << RESET << "a = " << a << ", b = " << b << std::endl;
    std::cout << BOLDYELLOW << "---> swap called." << RESET << std::endl;
    ::swap( a, b );
    std::cout << BOLDGREEN << "APRES : " << RESET << "a = " << a << ", b = " << b << std::endl;
    std::cout << BOLDYELLOW << "---> min called." << RESET << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << BOLDYELLOW << "---> max called." << RESET << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl << std::endl;

    a = 42;
    b = 42;
    std::cout << BOLDGREEN << "When identical, the second one should be returned: " << RESET << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "Adress of a: " << RESET << &a << std::endl;
    std::cout << "Adress of b: " << RESET << &b << std::endl;
    std::cout << BOLDYELLOW << "---> min called." << RESET << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "Adresse du retour : " << &::min( a, b ) << std::endl;
    std::cout << BOLDYELLOW << "---> max called." << RESET << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::cout << "Adresse du retour : " << &::max( a, b ) << std::endl << std::endl;
    
    std::string c = "chaine1";
    std::string d = "chaine2";
    
    std::cout << BOLDRED << "AVANT : " << RESET << "c = " << c << ", d = " << d << std::endl;
    std::cout << BOLDYELLOW << "---> swap called." << RESET << std::endl;
    ::swap(c, d);
    std::cout << BOLDGREEN << "APRES : " << RESET << "c = " << c << ", d = " << d << std::endl;
    std::cout << BOLDYELLOW << "---> min called." << RESET << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << BOLDYELLOW << "---> max called." << RESET << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl << std::endl;
    
    return (0);
}
