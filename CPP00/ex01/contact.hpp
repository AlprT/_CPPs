#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

using std::string;

class Contact
{
    private:
        string  m_name;
        string  m_surname;
        string  m_nick;
        string  m_phone_num;
        string  m_secret;
    public:
        string  get_name();
        string  get_surname();
        string  get_nick();
        string  get_phone_num();
        string  get_secret();
        void    set_name(string name);
        void    set_surname(string surname);
        void    set_nick(string nick);
        void    set_phone_num(string phonenum);
        void    set_secret(string secret);
};

#endif
