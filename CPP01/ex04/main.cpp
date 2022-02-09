/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <opacaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 14:25:31 by opacaud           #+#    #+#             */
/*   Updated: 2022/01/13 14:25:31 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

#include <iostream>
#include <string>
#include <fstream>

int ft_write_and_return(std::string message)
{
    std::cout << BOLDRED << message << RESET << std::endl;
    return (0);
}

int main(int ac, char **av)
{
    std::string     infile;
    std::string     line;
    unsigned int    i;
    std::size_t     found;
    std::string     outfile;

    if (ac != 4 || !av[2] || !av[2][0] || !av[3] || !av[3][0])
        return (ft_write_and_return("Usage: ./replace filename not_an_empty_string1 not_an_empty_string2"));
    infile = av[1];
    std::ifstream fd_in(infile.c_str());
    if (!fd_in)
        return (ft_write_and_return("Please select a valid file."));
    outfile = infile.append(".replace");
    std::ofstream fd_out(outfile.c_str());
    while (getline(fd_in, line))
    {
        found = line.find(av[2]);
        if (found == std::string::npos)
            fd_out << line << std::endl;
        else
        {
            i = 0;
            while (line[i])
            {
                if (line[i])
                    found = line.find(av[2]);
                if (found == std::string::npos)
                    break ;
                while (i < found)
                {
                    fd_out << line[i];
                    i++;
                }
                fd_out << av[3];
                line = line.substr(i + ((std::string)av[2]).length());
                i = 0;
            }
            fd_out << line;
            fd_out << std::endl;
        }
    }
    return (0);
}
