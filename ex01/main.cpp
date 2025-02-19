/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aszamora <aszamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 13:13:06 by aszamora          #+#    #+#             */
/*   Updated: 2025/02/17 11:51:07 by aszamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

void	menu()
{
	std::cout << "Please enter a command: " << std::endl;
	std::cout << "ADD" << std::endl;
	std::cout << "SEARCH" << std::endl;
	std::cout << "EXIT" <<std::endl; 
	std::cout << "------------------------------" <<std::endl;
	
}
int	main(int argc, char **argv)
{
	(void) argc;
	(void) argv;
	
	PhoneBook phonebook;
	while (1)
	{
		menu();
		std::string command;
		std::getline(std::cin, command);
		if (command == "EXIT")
			break ;
		else if (command == "ADD")
			phonebook.add_contact();
		else if (command == "SEARCH" )
			phonebook.search_contact();
		else
			std::cout << "Invalid command" << std::endl;
	}
}