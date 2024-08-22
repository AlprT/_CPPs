#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(),
    _guarding_gate(false)
{
    this->_HP = 100;
    this->_Energy = 50;
    this->_ATK = 20;
    cout << "ScavTrap " << G << "constructor" << RE << " called" << endl;
}

ScavTrap::ScavTrap(const string name) : ClapTrap(name),
    _guarding_gate(false)
{
    this->_HP = 100;
    this->_Energy = 50;
    this->_ATK = 20;
    cout << "ScavTrap " << G << "constructor " << RE << "called for " << Y << this -> _Name << RE << endl;
}

ScavTrap::ScavTrap(ScavTrap &copy) : ClapTrap(copy),
    _guarding_gate(copy._guarding_gate) {
    cout << "ScavTrap copy " << G << "constructor" << RE << " called" << endl;
}

ScavTrap::~ScavTrap() { cout << "ScavTrap " << R << "destructor " << RE << "called for " << Y << this -> _Name << RE << endl; }

ScavTrap &ScavTrap::operator=(const ScavTrap &src) {
    if (this != &src) {
        this->_Name = src._Name;
        this->_HP = src._HP;
        this->_Energy = src._Energy;
        this->_ATK = src._ATK;
        this->_guarding_gate = src._guarding_gate;
    }
    return *this;
}

void ScavTrap::attack(const string &target) {
    if (this -> _HP == 0)
        cout << "ScavTrap " << Y << this -> _Name << R << " is already dead, can't attack." << RE << endl;
    else if (this -> _ATK == 0)
        cout << "ScavTrap " << Y << this -> _Name << RE << " has no attack power!" << endl;
    else if (this -> _Energy != 0)
    {
        cout << "ScavTrap " << Y << this -> _Name << RE << " attacks " << target << ", causing " << this -> _ATK << " points of damage!" << endl;
        this -> _Energy--;
    }
    else
        cout << "ScavTrap " << Y << this -> _Name << RE << " has no energy to attack!" << endl;
}

void ScavTrap::guard_gate() {
    if (this -> _HP == 0)
        cout << "ScavTrap " << Y << this -> _Name << R << " is dead, can't guard gate." << RE << endl;
    else if (this -> _Energy != 0 && this -> _guarding_gate == false)
    {
        cout << "ScavTrap " << Y << this -> _Name << RE << " is now guarding the gate!" << endl;
        this -> _Energy--;
        this -> _guarding_gate = true;
    }
    else if (this -> _guarding_gate == true)
        cout << "ScavTrap " << Y << this -> _Name << RE << " is already guarding the gate!" << endl;
    else
        cout << "ScavTrap " << Y << this -> _Name << RE << " has no energy to guard the gate!" << endl;
}
