#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): _type("unknown")
{
    cout << "WrongAnimal constructor called" << endl;
}

WrongAnimal::~WrongAnimal()
{
        cout << "WrongAnimal destructor called" << endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &other)
{
    cout << "WrongAnimal copy constructor called" << endl;
    *this = other;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &other)
{
    cout << "WrongAnimal assignation operator called" << endl;
    this->_type = other._type;
    return *this;
}

string const &WrongAnimal::getType() const
{
    return (this->_type);
}

void    WrongAnimal::setType(string const &type)
{
    this->_type = type;
}

void    WrongAnimal::makeSound() const
{
    cout << "WrongAnimal " << this->_type << " said something" << endl;
}
