/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 14:25:26 by opacaud           #+#    #+#             */
/*   Updated: 2022/02/03 15:59:43 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

# define RESET  		"\033[0m"
# define BLACK  		"\033[30m"			/* Black */
# define RED    		"\033[31m"			/* Red */
# define GREEN  		"\033[32m"			/* Green */
# define YELLOW 		"\033[33m"			/* Yellow */
# define BLUE   		"\033[34m"			/* Blue */
# define MAGENTA		"\033[35m"			/* Magenta */
# define CYAN   		"\033[36m"			/* Cyan */
# define WHITE  		"\033[37m"			/* White */
# define BOLDBLACK  	"\033[1m\033[30m"	/* Bold Black */
# define BOLDRED    	"\033[1m\033[31m"	/* Bold Red */
# define BOLDGREEN  	"\033[1m\033[32m"	/* Bold Green */
# define BOLDYELLOW 	"\033[1m\033[33m"	/* Bold Yellow */
# define BOLDBLUE   	"\033[1m\033[34m"	/* Bold Blue */
# define BOLDMAGENTA	"\033[1m\033[35m"	/* Bold Magenta */
# define BOLDCYAN   	"\033[1m\033[36m"	/* Bold Cyan */
# define BOLDWHITE  	"\033[1m\033[37m"	/* Bold White */

class Weapon
{
    public :

        Weapon();
        Weapon(std::string type);
        ~Weapon();

        std::string const   &getType();
        void                setType(std::string type);

    private :

        std::string         m_type;
};

#endif
