
#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name")
{
    this -> _name = "Default";
    this -> _HP = FragTrap::_HP;
    this -> _Energy = ScavTrap::_Energy;
    this -> _ATK = FragTrap::_ATK;
    cout << "DiamondTrap Default " << G << "constructor" << RE << " called" << endl;
}

DiamondTrap::DiamondTrap(const string name) : ClapTrap(name + "_clap_name")
{
    this -> _name = name;
    this -> _HP = FragTrap::_HP;
    this -> _Energy = ScavTrap::_Energy;
    this -> _ATK = FragTrap::_ATK;
    cout << "DiamondTrap " << G << "constructor " << RE << "called for " << Y << this -> _name << RE << endl;
}

DiamondTrap::DiamondTrap(DiamondTrap &copy) : ClapTrap(copy)
{
    *this = copy;
    cout << "DiamondTrap " << G << "copy constructor" << RE << " called" << endl;
}

DiamondTrap::~DiamondTrap()
{
    cout << "DiamondTrap " << R << "destructor" << RE << " called for " << Y << _name << RE << endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy)
{
    if (this != &copy)
    {
        this -> _name = copy._name;
        this -> _HP = copy._HP;
        this -> _Energy = copy._Energy;
        this -> _ATK = copy._ATK;
    }
    cout << "DiamondTrap " << G << "assignation operator" << RE << " called" << endl;
    return *this;
}

void DiamondTrap::whoAmI()
{
    cout << "DiamondTrap " << Y << _name << RE << " is also " << G << ClapTrap::_Name << RE << endl;
}
