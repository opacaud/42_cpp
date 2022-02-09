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

#include "MutantStack.hpp"

void    printList(std::list<int> ls)
{
    int tmp;

    if (ls.empty())
        return ;
    tmp = ls.back();
    ls.pop_back();
    printList(ls);
    std::cout << tmp << " ";
    ls.push_back(tmp);
}

void    printStack(std::stack<int> s)
{
    int tmp;

    if (s.empty())
        return ;
    tmp = s.top();
    s.pop();
    printStack(s);
    std::cout << tmp << " ";
    s.push(tmp);
}

int main()
{
	std::cout << BOLDMAGENTA << std::endl << "-----------------------TESTS DU SUJET-----------------------" << RESET << std::endl << std::endl;

    MutantStack<int> mstack;
    mstack.push(5);                                         // 5
    mstack.push(17);                                        // 5 17
    std::cout << mstack.top() << std::endl << std::endl;            // = 17

    mstack.pop();                                           // 5
    std::cout << mstack.size() << std::endl << std::endl;           // = 1

    mstack.push(3);                                         // 5 3
    mstack.push(5);                                         // 5 3 5
    mstack.push(737);                                       // 5 3 5 735
    mstack.push(0);                                         // 5 3 5 735 0

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    
	std::cout << BOLDGREEN << "---> FULL STACK :" << RESET << std::endl;

    while (it != ite)
    {
        std::cout << GREEN << *it << RESET << " ";                              // = 5 3 5 737 0
        ++it;
    }

	std::cout << std::endl << std::endl << "-----COMPARAISON COPY-----" << std::endl << std::endl;
    
    std::stack<int> s(mstack);

    printStack(s);

	std::cout << BOLDMAGENTA << std::endl << std::endl << "-------------------------TESTS LIST-------------------------" << RESET << std::endl << std::endl;

    std::list<int> lstack;
    lstack.push_back(5);                                   // 5
    lstack.push_back(17);                                  // 5 17
    std::cout << lstack.back() << std::endl << std::endl;          // = 17

    lstack.pop_back();                                     // 5
    std::cout << lstack.size() << std::endl << std::endl;           // = 1

    lstack.push_back(3);                                   // 5 3
    lstack.push_back(5);                                   // 5 3 5
    lstack.push_back(737);                                 // 5 3 5 735
    lstack.push_back(0);                                   // 5 3 5 735 0
    
    it = mstack.begin();
    ite = mstack.end();
    ++it;
    --it;
    
	std::cout << BOLDGREEN << "---> FULL LIST :" << RESET << std::endl;

    while (it != ite)
    {
        std::cout << GREEN << *it << RESET << " ";                              // = 5 3 5 735 0
        ++it;
    }

	std::cout << std::endl << std::endl << "-----COMPARAISON COPY-----" << std::endl << std::endl;

    std::list<int> ls(lstack);
    printList(ls);


	std::cout << BOLDMAGENTA << std::endl << std::endl << "--------------------------THE  END--------------------------" << RESET << std::endl << std::endl;

    return (0);
}
