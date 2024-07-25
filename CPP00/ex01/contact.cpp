#include "contact.hpp"

using std::string;
        
string  Contact::get_name() {
    return (this->m_name);
}

string  Contact::get_surname() {
    return this->m_surname;
}

string  Contact::get_nick() {
    return this->m_nick;
}

string  Contact::get_phone_num() {
    return this->m_phone_num;
}

string  Contact::get_secret() {
    return this->m_secret;
}

void    Contact::set_name(string name) {
    this -> m_name = name;
}

void    Contact::set_surname(string surname) {
    this -> m_surname = surname;
}

void    Contact::set_nick(string nick) {
    this -> m_nick = nick;
}

void    Contact::set_phone_num(string phonenum) {
    this -> m_phone_num = phonenum;
}

void    Contact::set_secret(string secret) {
    this -> m_secret = secret;
}
