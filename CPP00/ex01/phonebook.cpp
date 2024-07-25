
#include "phonebook.hpp"
#include <string>

string	resize(string content);

Phonebook::Phonebook() {
    m_current = 0;
    m_index = 0;
}

void    Phonebook::ft_add() {
    Contact add;

    system("clear");
    cout << endl;
    cout << "Name           : ";
    getline(cin, m_name);
    cout << "Surname        : ";
    getline(cin, m_surname);
    cout << "Nick           : ";
    getline(cin, m_nick);
    cout << "Phone number   : ";
    getline(cin, m_phone_num);
    cout << "Darkest secret : ";
    getline(cin, m_secret);

    add.set_name(m_name);
    add.set_surname(m_surname);
    add.set_nick(m_nick);
    add.set_phone_num(m_phone_num);
    add.set_secret(m_secret);

    this -> m_contacts[m_current % 8] = add;
    this -> m_current++;
    if (this -> m_current <= 8)
        this->m_index = this -> m_current;
    cout << endl << "CONTACT ADDED SUCCESSFULY" << endl;
    cin.get();
    system("clear");
}

void    Phonebook::ft_print_contact() {
	cout << "|  INDEX   |   NAME   |  SURNAME |   NICK   |" << endl;
    for (int i = 0; i < (int)this -> m_index; i++)
    {
        cout
        << "|" << setw(10) << i
        << "|" << setw(10) << resize(m_contacts[i].get_name())
        << "|" << setw(10) << resize(m_contacts[i].get_surname())
        << "|" << setw(10) << resize(m_contacts[i].get_nick())
        << "|" << endl;
    }
}

void    Phonebook::ft_search() {
    unsigned int indx;

    system("clear");
    ft_print_contact();
    cout << endl << "Index : ";
    cin >> indx;
    cout << endl;
    if (cin.fail() || !std::isdigit(indx)) {
        cout << "INDEX INVALID" << endl << endl;
    }
    else
    {
        if (indx < this -> m_index)
        {
            cout << "Name           : " << this -> m_contacts[indx].get_name() << endl;
            cout << "Surname        : " << this -> m_contacts[indx].get_surname() << endl;
            cout << "Nick           : " << this -> m_contacts[indx].get_nick() << endl;
            cout << "Phone number   : " << this -> m_contacts[indx].get_phone_num() << endl;
            cout << "Darkest secret : " << this -> m_contacts[indx].get_secret() << endl << endl;
        }
        else 
            cout << "INDEX INVALID" << endl;
    }
    cin.get();
    cin.clear();
    cin.ignore(INT_MAX, '\n');
}

string	resize(string content)
{
	if (content.length() > 10)
	{
		content.erase(content.begin() + 9, content.end());
		content.append(".");
	}
	return (content);
}
