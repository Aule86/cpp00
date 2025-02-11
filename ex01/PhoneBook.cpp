/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aszamora <aszamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 11:49:24 by aszamora          #+#    #+#             */
/*   Updated: 2025/02/11 12:27:08 by aszamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

bool set_field(std::string field, std::string &value)
{
	std::cout << "Enter" << field << ":";
	std::getline(std::cin, value);
	if (value.empty() || !is_valid_imput(value))
}


void	PhoneBook::add_contact()
{
	Contact new_contact;
	
	std:: string first_name, last_name, nick_name, phone_number, darkest_secret;
	while (!set_field("first name", first_name))
		;
}