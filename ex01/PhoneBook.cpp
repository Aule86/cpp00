/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aszamora <aszamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 11:49:24 by aszamora          #+#    #+#             */
/*   Updated: 2025/02/12 13:33:37 by aszamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook()
{
}


void	PhoneBook::add_contact(int &i)
{
	Contact	new_contact;
	if (i == 8)
		i = 0;
	if (i < 8)
	{
		std::string first_name, last_name, nickname, phone_number, darkest_secret;
		std::cout << "name:";
		std::getline(std::cin, first_name);
		if (first_name.empty() || (first_name.size() == 1 && first_name[0] == '\n'))
		{
			while (first_name.empty())
			{
				std::cout << "Empty line, try again:";
            	std::getline(std::cin, first_name);
			}
		}
		std::cout << "Last name: ";
		std::getline(std::cin, last_name);
		if (last_name.empty() || (last_name.size() == 1 && last_name[0] == '\n'))
		{
			while (last_name.empty())
			{
				std::cout << "Empty line, try again:";
				std::getline(std::cin, last_name);
			}
		}
		std::cout << "Nickname:";
		std::getline(std::cin, nickname);
		if (nickname.empty() || (nickname.size() == 1 && nickname[0] == '\n'))
		{
			while (nickname.empty())
			{
				std::cout << "Empty line, try again:";
				std::getline(std::cin, nickname);
			}
		}
		std::cout << "Phone Number:";
		std::getline(std::cin, phone_number);
		int c = 0;
		while (phone_number.length() < 9)
		{
			if (!isdigit(phone_number[c]))
			{
				std::cout << "Invalid phone number, try again:";
				std::getline(std::cin, phone_number);
				c = 0;
			}
			c++;
		}
		std::cout << "Darkest Secret:";
		std::getline(std::cin, darkest_secret);
		if (darkest_secret.empty() || (darkest_secret.size() == 1 && darkest_secret[0] == '\n'))
		{
			while (darkest_secret.empty())
			{
				std::cout << "Empty line, try again:";
				std::getline(std::cin, darkest_secret);
			}
		}
		new_contact.set_contact(first_name, last_name, nickname, phone_number,
		darkest_secret);
		std::cout << "Contact created" << std::endl;
		i++;
	}
}