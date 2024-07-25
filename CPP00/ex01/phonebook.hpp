#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"
# include <iomanip>
# include <limits>
# include <string>

using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::system;
using std::string;
using std::setw;

class Phonebook
{
private:
    Contact m_contacts[8];
    unsigned int m_current;
    unsigned int m_index;
    string  m_name;
    string  m_surname;
    string  m_nick;
    string  m_phone_num;
    string  m_secret;
public:
    Phonebook();
    void    ft_add();
    void    ft_search();
    void    ft_print_contact();
};

#endif
