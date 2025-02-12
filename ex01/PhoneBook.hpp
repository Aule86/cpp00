/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aszamora <aszamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 13:39:30 by aszamora          #+#    #+#             */
/*   Updated: 2025/02/12 13:32:59 by aszamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.hpp"

#define MAX_CONTACTS 8

class PhoneBook
{
public:
	PhoneBook();
	void add_contact(int &i);
	//void display_contact();

private:
    Contact contacts[MAX_CONTACTS];
    //int contact_count;
    //void stylize(std::string str);
};

#endif