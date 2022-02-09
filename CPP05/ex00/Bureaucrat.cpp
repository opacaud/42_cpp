/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 11:14:26 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/26 11:14:26 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : m_name(""), m_grade(150)
{
    // std::cout << BOLDBLUE << "Default constructor for Bureaucrat called." << RESET << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : m_name(name)
{
    if (grade < 1)
    {
        m_grade = 0;
        throw Bureaucrat::GradeTooHighException();
    }
    else if (grade > 150)
    {
        m_grade = 0;
        throw Bureaucrat::GradeTooLowException();
    }
    else
    {
        m_grade = grade;
        // std::cout << BOLDBLUE << "Constructor for Bureaucrat " << m_name << " called." << RESET << std::endl;
    }
}

Bureaucrat::Bureaucrat(Bureaucrat const & BureaucratACopier) : m_name(BureaucratACopier.m_name), m_grade(BureaucratACopier.m_grade)
{
    // std::cout << BLUE << "Copy constructor for Bureaucrat called." << RESET << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    // if (this->getName().length() > 0)
        // std::cout << BOLDBLUE << "Destructor for Bureaucrat " << m_name << " called." << RESET << std::endl;
    // else
        // std::cout << BOLDBLUE << "Destructor for Bureaucrat called." << RESET << std::endl;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & BureaucratACopier)
{
    // std::cout << BLUE << "Assignation operator for Bureaucrat called." << RESET << std::endl;
    if (this != &BureaucratACopier)
    {
        m_grade = BureaucratACopier.getGrade();
    }
    return (*this);
}

////////////////////////////////////////////////////////////////////////////////

std::string const   Bureaucrat::getName() const
{
    return (m_name);
}

int Bureaucrat::getGrade() const
{
    return (m_grade);
}

void    Bureaucrat::upgrade()
{
    std::cout << BOLDYELLOW << "upgrade function called." << RESET << std::endl;
    if (m_grade == 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    else
    {
        m_grade--;
    }
}

void    Bureaucrat::downgrade()
{
    std::cout << BOLDYELLOW << "downgrade function called." << RESET << std::endl;
    if (m_grade == 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
    else
    {
        m_grade++;
    }
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return("The bureaucrat's grade is too high.");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return("The bureaucrat's grade is too low.");
}

std::ostream & operator<<(std::ostream & flux, Bureaucrat const & bureaucrat)
{
    flux << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
    return (flux);
}
