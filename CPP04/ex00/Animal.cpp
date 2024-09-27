#include "Animal.hpp"

Animal::Animal(void): _type("unknown")
{
    cout << "Animal constructor called" << endl;
}

Animal::~Animal()
{
        cout << "Animal destructor called" << endl;
}

Animal::Animal(Animal const &other)
{
    cout << "Animal copy constructor called" << endl;
    *this = other;
}

Animal &Animal::operator=(Animal const &other)
{
    cout << "Animal assignation operator called" << endl;
    this->_type = other._type;
    return *this;
}

string const &Animal::getType() const
{
    return (this->_type);
}

void    Animal::setType(string const &type)
{
    this->_type = type;
}

void    Animal::makeSound() const
{
    cout << "Animal " << this->_type << " said something" << endl;
}
