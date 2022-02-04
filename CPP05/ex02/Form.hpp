/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 11:14:18 by opacaud           #+#    #+#             */
/*   Updated: 2022/02/03 15:50:25 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form
{
	public :

	    Form();
        Form(std::string const name, std::string const target, int gradeToSign, int gradeToExec);
        Form(Form const & FormACopier);
        virtual ~Form();
        Form & operator=(Form const & FormACopier);

        std::string const   getName() const;
        bool				getSigned() const;
        int					getGradeToSign() const;
        int					getGradeToExec() const;
		Form &				beSigned(Bureaucrat const & Bureaucrat);
        virtual void        execute (Bureaucrat const & executor) const = 0;       // ---> ABSTRACT

        class GradeTooHighException : public std::exception
        {
            public :
                virtual const char *what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public :
                virtual const char *what() const throw();
        };

        class IsNotSignedException : public std::exception
        {
            public :
                virtual const char *what() const throw();
        };

	protected :

		std::string	const	m_name;
		std::string	const	m_target;
		bool				m_signed;
		int const			m_grade_to_sign;
		int const			m_grade_to_exec;
};

std::ostream & operator<<(std::ostream & flux, Form const & form);

#endif
