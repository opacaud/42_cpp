/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:01:34 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/27 13:25:48 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", "", 145, 137)
{
    // std::cout << BOLDBLUE << "Default constructor for ShrubberyCreationForm called." << RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) : Form("ShrubberyCreationForm", target, 145, 137)
{
    // std::cout << BOLDBLUE << "Constructor for ShrubberyCreationForm with target called." << RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & ShrubberyCreationFormACopier) : Form(ShrubberyCreationFormACopier)
{
    // std::cout << BLUE << "Copy constructor for ShrubberyCreationForm called." << RESET << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	// if (m_name.length() > 0)
	//     std::cout << BOLDBLUE << "Destructor for ShrubberyCreationForm " << m_name << " called." << RESET << std::endl;
	// else
	//     std::cout << BOLDBLUE << "Destructor for ShrubberyCreationForm called." << RESET << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & ShrubberyCreationFormACopier)
{
	Form::operator=(ShrubberyCreationFormACopier);
    return (*this);
    // std::cout << BLUE << "Assignation operator for ShrubberyCreationForm called." << RESET << std::endl;
}

////////////////////////////////////////////////////////////////////////////////

void	ShrubberyCreationForm::execute (Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::ofstream myFile((m_target + "_shrubbery").c_str());

	myFile << "            .        +          .      .          .\n";
	myFile << "     .            _        .                    .\n";
	myFile << "  ,              /;-._,-.____        ,-----.__\n";
	myFile << " ((        .    (_:#::_.:::. `-._   /:, /-._, `._,\n";
	myFile << "  `                 \\   _|`\"=:_::.`.);  \\ __/ /\n";
	myFile << "                      ,    `./  \\:. `.   )==-'  .\n";
	myFile << "    .      ., ,-=-.  ,\\, +#./`   \\:.  / /           .\n";
	myFile << ".           \\/:/`-' , ,\\ '` ` `   ): , /_  -o\n";
	myFile << "       .    /:+- - + +- : :- + + -:'  /(o-) \\)     .\n";
	myFile << "  .      ,=':  \\    ` `/` ' , , ,:' `'--\".--\"---._/`7\n";
	myFile << "   `.   (    \\: \\,-._` ` + '\\, ,\"   _,--._,---\":.__/\n";
	myFile << "              \\:  `  X` _| _,\\/'   .-'\n";
	myFile << ".               \":._:`\\____  /:'  /      .           .\n";
	myFile << "                    \\::.  :\\/:'  /              +\n";
	myFile << "   .                 `.:.  /:'  }      .\n";
	myFile << "           .           ):_(:;   \\           .\n";
	myFile << "                      /:. _/ ,  |\n";
	myFile << "                   . (|::.     ,`                  .\n";
	myFile << "     .                |::.    {\\\n";
	myFile << "                      |::.\\  \\ `.\n";
	myFile << "                      |:::(\\    |\n";
	myFile << "              O       |:::/{ }  |                  (o\n";
	myFile << "               )  ___/#\\::`/ (O \"==._____   O, (O  /`\n";
	myFile << "          ~~~w/w~\"~~,\\` `:/,-(~`\"~~~~~~~~\"~o~\\~/~w|/~\n";
	myFile << "      ~~~~~~~~~~~~~~~~~~~~~~~\\W~~~~~~~~~~~~\\|/~~\n";
}
