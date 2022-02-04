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

#include <iostream>
#include <string>
#include <fstream>

int ft_write_and_return(std::string message)
{
    std::cout << message << std::endl;
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
