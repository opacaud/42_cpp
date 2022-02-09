/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 10:20:26 by opacaud           #+#    #+#             */
/*   Updated: 2022/02/09 17:33:40 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert() : m_base(""), m_type (""),
					m_char(0), m_char_flag("possible"),
					m_int(0), m_int_flag("possible"),
					m_float(0.0f), m_float_flag("no"),
					 m_double(0.0), m_double_flag("no")
{
    // std::cout << BOLDBLUE << "Default constructor for Convert called." << RESET << std::endl;
	setAttributes();
}

Convert::Convert(std::string base, std::string type) : m_base(base), m_type(type),
														m_char(0), m_char_flag("possible"),
														m_int(0), m_int_flag("possible"),
														m_float(0.0f), m_float_flag("no"),
														m_double(0.0), m_double_flag("no")
{
	// std::cout << BOLDBLUE << "Constructor for Convert called." << RESET << std::endl;
	setAttributes();
}

Convert::Convert(Convert const & ConvertACopier)
{
    // std::cout << BLUE << "Copy constructor for Convert called." << RESET << std::endl;
	*this = ConvertACopier;
}

Convert::~Convert()
{
    // std::cout << BOLDBLUE << "Destructor for Convert called." << RESET << std::endl;
}

Convert & Convert::operator=(Convert const & ConvertACopier)
{
    // std::cout << BLUE << "Assignation operator for Convert called." << RESET << std::endl;
	if (this != &ConvertACopier)
	{
		m_base = ConvertACopier.m_base;
		m_char = ConvertACopier.m_char;
		m_int = ConvertACopier.m_int;
		m_float = ConvertACopier.m_float;
		m_double = ConvertACopier.m_double;
	}
	return (*this);
}

////////////////////////////////////////////////////////////////////////////////

void	Convert::setCharFlag(std::string flag)
{
	m_char_flag = flag;
}

void	Convert::setIntFlag(std::string flag)
{
	m_int_flag = flag;
}

void	Convert::setFloatFlag(std::string flag)
{
	m_float_flag = flag;
}

void	Convert::setDoubleFlag(std::string flag)
{
	m_double_flag = flag;
}

std::string	Convert::getType()
{
	return (m_type);
}

std::string	Convert::getCharFlag()
{
	return (m_char_flag);
}

std::string	Convert::getIntFlag()
{
	return (m_int_flag);
}

std::string	Convert::getFloatFlag()
{
	return (m_float_flag);
}

std::string	Convert::getDoubleFlag()
{
	return (m_double_flag);
}

void	Convert::setAttributesIfChar()
{
	m_char = m_base[0];
	m_int = static_cast<int>(m_char);
	m_float = static_cast<float>(m_char);
	m_double = static_cast<double>(m_char);
}

void	Convert::setAttributesIfInt()
{
	m_char = ft_stod(m_base.c_str());
	if (ft_stod(m_base.c_str()) < std::numeric_limits<int>::min()
		|| ft_stod(m_base.c_str()) > std::numeric_limits<int>::max())
		setIntFlag("impossible");
	else
		m_int = ft_stod(m_base.c_str());
	m_float = ft_stod(m_base.c_str());
	m_double = ft_stod(m_base.c_str());
}

void	Convert::setAttributesIfFloat()
{
	if (m_base == "- inff" || m_base == "-inff" || m_base == "+ inff" || m_base == "+inff" || m_base == "nanf")
	{
		setCharFlag("impossible");
		setIntFlag("impossible");
		setFloatFlag(m_base);
		setDoubleFlag(m_base.erase(m_base.length() - 1));
	}
	else
	{
		m_char = ft_stod(m_base.c_str());
		if (ft_stod(m_base.c_str()) < std::numeric_limits<int>::min()
		|| ft_stod(m_base.c_str()) > std::numeric_limits<int>::max())
			setIntFlag("impossible");
		else
			m_int = ft_stod(m_base.c_str());
		m_float = ft_stod(m_base.c_str());
		m_double = ft_stod(m_base.c_str());
	}
}

void	Convert::setAttributesIfDouble()
{
	if (m_base == "- inf" || m_base == "-inf" || m_base == "+ inf" || m_base == "+inf" || m_base == "nan")
	{
		setCharFlag("impossible");
		setIntFlag("impossible");
		setFloatFlag(m_base + "f");
		setDoubleFlag(m_base);
	}
	else
	{
		m_char = ft_stod(m_base.c_str());
		if (ft_stod(m_base.c_str()) < std::numeric_limits<int>::min()
		|| ft_stod(m_base.c_str()) > std::numeric_limits<int>::max())
			setIntFlag("impossible");
		else
			m_int = ft_stod(m_base.c_str());
		m_float = ft_stod(m_base.c_str());
		m_double = ft_stod(m_base.c_str());
	}
}

void	Convert::setAttributes()
{
	int	i;
	std::string type_tab[] = {"char", "int", "float", "double"};

	if (m_type == "Invalid")
		return ;
	void (Convert::*type_ptr[4]) (void) =
    {
        type_ptr[0] = &Convert::setAttributesIfChar,
        type_ptr[1] = &Convert::setAttributesIfInt,
        type_ptr[2] = &Convert::setAttributesIfFloat,
        type_ptr[3] = &Convert::setAttributesIfDouble
    };
    i = 0;
    while (i < 4)
    {
        if (type_tab[i] == m_type)
        {
            (this->*type_ptr[i])();
            break ;
        }
        i++;
    }
}

void	Convert::print()
{
	// std::cout << *this << std::endl;

	std::cout << BOLDYELLOW << "char: " << RESET;
	if (getCharFlag() == "impossible")
		std::cout << "impossible" << std::endl;
	else if (m_char < 32 || m_char == 127)
		std::cout << "Non displayable" << std::endl;
	else
	 	std::cout << "'" << static_cast<char>(m_char) << "'" << std::endl;


	std::cout << BOLDCYAN << "int: " << RESET;
	if (getIntFlag() == "impossible")
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(m_int) << std::endl;


	std::cout << BOLDBLUE << "float: " << RESET;
	if (getFloatFlag() == "no")
	{
		std::cout << static_cast<float>(m_float);
		if (howManyChar(m_base, '.') == 0 || onlyZerosAtTheEnd(m_base) == 1)
			std::cout << ".0";
		std::cout << "f";
		std::cout << std::endl;
	}
	else
		std::cout << getFloatFlag() << std::endl;

	
	std::cout << BOLDMAGENTA << "double: " << RESET;
	if (getDoubleFlag() == "no")
	{
		std::cout << static_cast<double>(m_double);
		if (howManyChar(m_base, '.') == 0 || onlyZerosAtTheEnd(m_base) == 1)
			std::cout << ".0";
		std::cout << std::endl;
	}
	else
		std::cout << getDoubleFlag() << std::endl;
}

std::ostream & operator<<(std::ostream & flux, Convert & conv)
{
    flux << std::endl << MAGENTA << "CONVERT PRESENTATION" << RESET << std::endl;
	flux << "Type: " << conv.getType() << std::endl;
	flux << "Char_flag: " << conv.getCharFlag() << std::endl;
	flux << "Int_flag: " << conv.getIntFlag() << std::endl;
	flux << "Float_flag: " << conv.getFloatFlag() << std::endl;
	flux << "Double_flag: " << conv.getDoubleFlag() << std::endl;
    return (flux);
}
