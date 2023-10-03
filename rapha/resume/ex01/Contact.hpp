/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:25:51 by fmoreira          #+#    #+#             */
/*   Updated: 2023/10/03 19:04:17 by fmoreira         ###   ########.fr       */
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

    static bool _isBlank(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret);
    static bool _isAlpha(std::string str);
    static bool _isPhone(std::string phoneNumber);
    static bool _checker(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret);
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