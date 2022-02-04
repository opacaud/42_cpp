/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 11:15:25 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/27 13:36:33 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : m_name(""), m_signed(0), m_grade_to_sign(150), m_grade_to_exec(150)
{
    // std::cout << BOLDBLUE << "Default constructor for Form called." << RESET << std::endl;
}

Form::Form(std::string const name, int const gradeToSign, int const gradeToExec) : m_name(name), m_signed(0), m_grade_to_sign(gradeToSign), m_grade_to_exec(gradeToExec)
{
    if (gradeToSign < 1 || gradeToExec < 1)
    {
        throw Form::GradeTooHighException();
    }
    else if (gradeToSign > 150 || gradeToExec > 150)
    {
        throw Form::GradeTooLowException();
    }
    // std::cout << BOLDBLUE << "Constructor for Form " << name << " called." << RESET << std::endl;
}

Form::Form(Form const & FormACopier) : m_name(FormACopier.m_name),
										m_signed(FormACopier.m_signed),
										m_grade_to_sign(FormACopier.m_grade_to_sign),
										m_grade_to_exec(FormACopier.m_grade_to_exec)
{
    // std::cout << BLUE << "Copy constructor for Form called." << RESET << std::endl;
}

Form::~Form()
{
	// if (m_name.length() > 0)
	    // std::cout << BOLDBLUE << "Destructor for Form " << m_name << " called." << RESET << std::endl;
	// else
	    // std::cout << BOLDBLUE << "Destructor for Form called." << RESET << std::endl;
}

Form & Form::operator=(Form const & FormACopier)
{
    // std::cout << BLUE << "Assignation operator for Form called." << RESET << std::endl;
    if (this != &FormACopier)
    {
        m_signed = FormACopier.getSigned();
    }
    return (*this);
}

////////////////////////////////////////////////////////////////////////////////

std::string const	Form::getName() const
{
    return (m_name);
}

bool	Form::getSigned() const
{
	return (m_signed);
}

int	Form::getGradeToSign() const
{
    return (m_grade_to_sign);
}

int	Form::getGradeToExec() const
{
    return (m_grade_to_exec);
}

Form	&Form::beSigned(Bureaucrat const & Bureaucrat)
{
	std::cout << BOLDYELLOW << "beSigned function called so that " << getName() << " is signed by " << Bureaucrat.getName() << RESET << std::endl;
	if (m_signed == 1)
	{
		std::cout << "Form already signed." << std::endl;
		return (*this);
	}
	else if (Bureaucrat.getGrade() <= m_grade_to_sign)
	{
		m_signed = 1;
		return (*this);
	}
	else
	{
		throw Form::GradeTooLowException();
	}
}

const char *Form::GradeTooHighException::what() const throw()
{
    return("The form's grade is too high.");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return("The form's grade is too low.");
}

std::ostream & operator<<(std::ostream & flux, Form const & form)
{
    flux << std::endl << MAGENTA << "FORM PRESENTATION" << RESET << std::endl;
	flux << "Name: " << form.getName() << std::endl;
	flux << "Form is signed: ";
	if (form.getSigned() == 0)
		flux << "No" << std::endl;
	else
		flux << "Yes" << std::endl;
	flux << "Grade necessary to sign: " << form.getGradeToSign() << std::endl;
	flux << "Grade necessary to execute: " << form.getGradeToExec() << std::endl;
    return (flux);
}
