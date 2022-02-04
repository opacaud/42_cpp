/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 09:58:47 by opacaud           #+#    #+#             */
/*   Updated: 2022/02/03 15:50:25 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Cure : public AMateria
{
	public :

		Cure();
		Cure(Cure const & CureACopier);
		virtual ~Cure();
		Cure & operator=(Cure const & CureACopier);
		
		std::string			getType() const;
		virtual AMateria*	clone() const;
		virtual void		use(ICharacter& target);
};

#endif
