/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:26:09 by opacaud           #+#    #+#             */
/*   Updated: 2022/02/09 12:07:13 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class Phonebook
{
	public:

		Phonebook();
		~Phonebook();

		void	ft_add_contact(int *nb_contacts);
		void	ft_search_contact(int nb_contacts);

	private:
	
		Contact	m_contact_tab[8];
};

#endif
