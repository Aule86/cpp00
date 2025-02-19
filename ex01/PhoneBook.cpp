/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aszamora <aszamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 11:49:24 by aszamora          #+#    #+#             */
/*   Updated: 2025/02/19 12:44:23 by aszamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook()
{
    contact_count = 0;
    index_replace = 0;
}


void	PhoneBook::add_contact()
{
	Contact	new_contact;
	
	std::string first_name, last_name, nickname, phone_number, darkest_secret;
	std::cout << "name: ";
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
	std::cout << "Nickname: ";
	std::getline(std::cin, nickname);
	if (nickname.empty() || (nickname.size() == 1 && nickname[0] == '\n'))
	{
		while (nickname.empty())
		{
			std::cout << "Empty line, try again:";
			std::getline(std::cin, nickname);
		}
	}
	std::cout << "Phone Number: ";
	std::getline(std::cin, phone_number);
	int c = 0;
	while (phone_number.size() != 9)
	{
		if (!isdigit(phone_number[c]))
		{
			std::cout << "Invalid phone number, try again:";
			std::cin >> phone_number;
			c = 0;
		}
		c++;
	}
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, darkest_secret);
	if (darkest_secret.empty() || (darkest_secret.size() == 1 && darkest_secret[0] == '\n'))
	{
		while (darkest_secret.empty())
		{
			std::cout << "Empty line, try again:";
			std::getline(std::cin, darkest_secret);
		}
	}
	new_contact.set_contact(first_name, last_name, nickname, phone_number,darkest_secret);
	std::cout << "Contact created" << std::endl;
 	contacts[index_replace] = new_contact;
    index_replace = (index_replace + 1) % MAX_CONTACTS;
    if (contact_count < MAX_CONTACTS)
        contact_count++;
}

void PhoneBook::stylize(std::string str)
{
	if (str.length() > 10)
		std::cout << str.substr(0, 9) + ".";
	else
		std::cout << std::setw(10) << str;
	std::cout << '|';
}

void	PhoneBook::search_contact()
{
	for (int i = 0; i < contact_count; ++i)
	{
		std::cout << '|' << std::setw(10) << i + 1 << '|';
		stylize(contacts[i].get_first_name());
		stylize(contacts[i].get_last_name());
		stylize(contacts[i].get_nickname());
		std::cout << std::endl;
	}
	while (1)
	{
		std::string index;
		std::cout << "\nEnter the index of the contact you want to display: ";
		std::cout << std::endl;
		std::cout << "BACK to return to the main menu." << std::endl;
		std::getline(std::cin, index);
		if (index == "BACK")
			break ;
		else if (index.length() == 1 && index[0] >= '1' && index[0] <= '8')
		{
			int i = index[0] - '1';
			std::cout << "First name: " << contacts[i].get_first_name() << std::endl;
			std::cout << "Last name: " << contacts[i].get_last_name() << std::endl;
			std::cout << "Nickname: " << contacts[i].get_nickname() << std::endl;
			std::cout << "Phone number: " << contacts[i].get_phone_number() << std::endl;
			std::cout << "Darkest secret: " << contacts[i].get_darkest_secret() << std::endl;
		}
		else
			std::cout << "Invalid Index" << std::endl;
	}
}
