/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:25:51 by fmoreira          #+#    #+#             */
/*   Updated: 2023/09/30 12:49:11 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
private:
    std::string _firstName;
    std::string _lastName;
    std::string _nickName;
    std::string _phoneNumber;
    std::string _darkestSecret;

    static bool isBlank(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret);
    static bool isAlpha(std::string str);
    static bool isPhone(std::string phoneNumber);
    static bool checker(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret);
    static void isEOF();
    
public:
    Contact();
    ~Contact();

    Contact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret);
    
    std::string getFirstName();
    std::string getLastName();
    std::string getNickName();
    std::string getPhoneNumber();
    std::string getDarkestSecret();

    bool populateContact();
    Contact &returnContact();
};

#endif