/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aszamora <aszamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 13:39:30 by aszamora          #+#    #+#             */
/*   Updated: 2025/02/10 13:58:06 by aszamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

#define MAX_CONTACTS 8

class PhoneBook
{
public:
	PhoneBook();
	void add_contact();
	void display_contact();

private:
    Contact contacts[MAX_CONTACTS];
    int contact_count;
    bool set_field(std::string field, std::string &value);
    void stylize(std::string str);
    bool is_valid_input(const std::string &value) const;
};

#endif