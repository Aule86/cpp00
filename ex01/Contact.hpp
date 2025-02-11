/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aszamora <aszamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 13:13:31 by aszamora          #+#    #+#             */
/*   Updated: 2025/02/10 13:58:13 by aszamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
private:
    std::string name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
	
public:
	Contact();
	void set_contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret);
	std::string get_first_name() const;
    std::string get_last_name() const;
    std::string get_nickname() const;
    std::string get_phone_number() const;
    std::string get_darkest_secret() const;
};

#endif
