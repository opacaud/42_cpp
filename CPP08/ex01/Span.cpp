/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 10:26:58 by opacaud           #+#    #+#             */
/*   Updated: 2022/02/03 10:36:12 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : m_N(0), m_vec(0)
{
    // std::cout << BOLDBLUE << "Default constructor for Span called." << RESET << std::endl;
};

Span::Span(unsigned int N) : m_N(N), m_vec(0)
{
	// std::cout << BOLDBLUE << "Constructor for Span called." << RESET << std::endl;
};

Span::Span(Span const & SpanACopier)
{
    // std::cout << BLUE << "Copy constructor for Span called." << RESET << std::endl;
	*this = SpanACopier;
};

Span::~Span()
{
    // std::cout << BOLDBLUE << "Destructor for Span called." << RESET << std::endl;
};

Span & Span::operator=(Span const & SpanACopier)
{
	// std::cout << BLUE << "Assignation operator for Span called." << RESET << std::endl;
	unsigned int	i;

	if (this != &SpanACopier)
	{
		m_N = SpanACopier.m_N;
		i = 0;
		while (i < m_N)
		{
			m_vec[i] = SpanACopier.m_vec[i];
			i++;
		}
	}
	return (*this);
};

////////////////////////////////////////////////////////////////////////////////

unsigned int		Span::getN()
{
	return (m_N);
}

std::vector<int>	Span::getVec()
{
	return (m_vec);
}

std::vector<int>	*Span::getVecAddr()
{
	return (&m_vec);
}

std::ostream & operator<<(std::ostream & flux, Span & span)
{
	unsigned int	i;

	if (span.getN() == 0 || span.getVec().size() == 0)
	{
		flux << std::endl << BOLDGREEN << "vec.size() = 0" << RESET << std::endl;
		return (flux);
	}
	i = 0;
	while (i < span.getVec().size())
	{
		flux << "vec[" << i << "]: " << span.getVec()[i] << std::endl;
		i++;
	}
	return (flux);
}

void	Span::addNumber(int nb)
{
	std::cout << std::endl;
	if (m_vec.size() < m_N)
	{
		std::cout << BOLDGREEN << "size before: " << m_vec.size() << RESET << std::endl;
		m_vec.push_back(nb);
    	std::cout << YELLOW << "push_back(" << nb << ")" << RESET << std::endl;
    	std::cout << *this;
		std::cout << BOLDGREEN << "size after: " << m_vec.size() << RESET << std::endl;
		std::cout << std::endl << "-----------------" << std::endl;
	}
	else
	{
		throw SpanFullException();
	}
}

double Span::shortestSpan()
{
	std::vector<int>			tmp;
	std::vector<int>::iterator	it;
	double						span;
	double						diff_tmp;

	if (m_vec.size() <= 1)
		throw NotEnoughNumberException();

	tmp = m_vec;
	
	std::sort(tmp.begin(), tmp.end());
	
	span = std::numeric_limits<double>::max();
	
	it = tmp.begin();
	while (it != tmp.end() - 1)
	{
		diff_tmp = *it - *(it + 1);
		if (diff_tmp < 0)
			diff_tmp = -diff_tmp;
		if (diff_tmp < span)
			span = diff_tmp;
		it++;
	}

	return (span);
}

double Span::longestSpan()
{
	std::vector<int>	tmp;
	double				span;

	if (m_vec.size() <= 1)
		throw NotEnoughNumberException();
	
	tmp = m_vec;
	
	std::sort(tmp.begin(), tmp.end());

	span = -1;
	span = (*(tmp.end() - 1) - *tmp.begin());

	return (span);
}

void	fillRandom(std::vector<int> & tmp, unsigned int quantity)
{
	unsigned int	i;

	srand(0);
	i = 0;
	while (i < quantity)
	{
		tmp.push_back(rand() % quantity);
		i++;
	}
}

void	Span::addManyNumbers_vec(std::vector<int>::iterator end, unsigned int quantity)
{
	if (quantity + m_vec.size() > m_N)
		throw AddingTooManyNumbersException();
	std::vector<int> tmp;
	fillRandom(tmp, quantity);
	m_vec.insert(end, tmp.begin(), tmp.end());
}

void	Span::addManyNumbers_insert(std::vector<int> *vec, unsigned int quantity)
{
	if (quantity + m_vec.size() > m_N)
		throw AddingTooManyNumbersException();
	std::vector<int> tmp;
	fillRandom(tmp, quantity);
	std::copy (tmp.begin(), tmp.end(), back_inserter(*vec));
}
