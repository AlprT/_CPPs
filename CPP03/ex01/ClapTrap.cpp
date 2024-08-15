
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _Name("ClapTrap"), _HP(10), _Energy(10), _ATK(0) {
    cout << "ClapTrap " << this -> _Name << " is created!" << endl;
}

ClapTrap::ClapTrap(string name) : _Name(name), _HP(10), _Energy(10), _ATK(0) {
    cout << "ClapTrap " << this -> _Name << " is created!" << endl;
}

ClapTrap::~ClapTrap() {
    cout << "ClapTrap " << this -> _Name << " is destroyed!" << endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    cout << "ClapTrap " << this -> _Name << " is copied!" << endl;
    *this = copy;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &copy)
{
    this -> _Name = copy._Name;
    this -> _HP = copy._HP;
    this -> _Energy = copy._Energy;
    this -> _ATK = copy._ATK;
    return (*this);
}

void ClapTrap::attack(string const &target)
{
    if (this -> _HP == 0)
        cout << "ClapTrap " << Y << this -> _Name << R << " is already dead, can't attack." << RE << endl;
    else if (this -> _ATK == 0)
        cout << "ClapTrap " << Y << this -> _Name << RE << " has no attack power!" << endl;
    else if (this -> _Energy != 0)
    {
        cout << "ClapTrap " << Y << this -> _Name << RE << " attacks " << target << ", causing " << this -> _ATK << " points of damage!" << endl;
        this -> _Energy--;
    }
    else
        cout << "ClapTrap " << Y << this -> _Name << RE << " has no energy to attack!" << endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this -> _HP > 0)
        this -> _HP -= amount;
    else if (this -> _HP > 0)
        this -> _HP = 0;
    else {
        cout << "ClapTrap " << Y << this -> _Name << R << " is already dead, stop hitting, not cool." << RE << endl; return ;
    }
    cout << "ClapTrap " << Y << this -> _Name << RE << " takes " << amount << 
    " points of damage. Now has " << this -> _HP << " HP." << endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this -> _Energy != 0 && this -> _HP != 0 && this -> _HP <= 10)
    {
        this -> _HP += amount;
        cout << "ClapTrap " << Y << this -> _Name << RE << " is healed for " << amount << 
        " points. Now has " << this -> _HP << " HP." << endl;
        this -> _Energy--;
    }
    else if (this -> _Energy == 0)
        cout << "ClapTrap " << Y << this -> _Name << RE << " has no energy to repair!" << endl;
    else if (this -> _HP == 0)
        cout << "ClapTrap " << Y << this -> _Name << R << " is already dead, can't repair." << RE << endl;
    else
        cout << "ClapTrap " << Y << this -> _Name << RE << " has no energy to repair!" << endl;
}
