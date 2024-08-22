#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->_HP = 100;
    this->_Energy = 100;
    this->_ATK = 30;
    cout << "FragTrap " << G << "constructor" << RE << " called" << endl;
}

FragTrap::FragTrap(const string name) : ClapTrap(name)
{
    this->_HP = 100;
    this->_Energy = 100;
    this->_ATK = 30;
    cout << "FragTrap " << G << "constructor " << RE << "called for " << Y << this -> _Name << RE << endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
    *this = copy;
    cout << "FragTrap " << G << "copy constructor" << RE << " called" << endl;
}

FragTrap::~FragTrap()
{
    cout << "FragTrap " << R << "destructor" << RE << " called" << endl;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
    if (this != &copy)
    {
        this -> _Name = copy._Name;
        this -> _HP = copy._HP;
        this -> _Energy = copy._Energy;
        this -> _ATK = copy._ATK;
    }
    cout << "FragTrap " << G << "assignation operator" << RE << " called" << endl;
    return *this;
}

void FragTrap::highFivesGuys(void) const
{
    cout << "FragTrap " << Y << this -> _Name << RE << " requests a high five!" << endl;
}


