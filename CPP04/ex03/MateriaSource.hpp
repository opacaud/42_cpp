/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:47:58 by opacaud           #+#    #+#             */
/*   Updated: 2022/02/03 15:50:25 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public :

		MateriaSource();
		MateriaSource(MateriaSource const & MateriaSourceACopier);
		virtual ~MateriaSource();
		MateriaSource & operator=(MateriaSource const & MateriaSourceACopier);

		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);

	protected :

		static const int	m_nb_in_memory = 4;
		AMateria			*m_memory[m_nb_in_memory];
};

#endif
