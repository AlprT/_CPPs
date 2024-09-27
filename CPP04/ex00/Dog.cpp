#include "Dog.hpp"

Dog::Dog()
{
	cout << "Dog Constructor Called" << endl;
	this->setType("Dog");
}
Dog::~Dog()
{
	cout << "Dog Destructor Called" << endl;
}

Dog::Dog(const Dog& obj)
{
	cout << "Dog copy Constructor Called" << endl;
	*this = obj;
}

Dog& Dog::operator=(const Dog& copy)
{
	cout << "Dog operator Assigment Operator Called" << endl;
	this->_type = copy._type;
	return (*this);
}

void Dog::makeSound() const
{
	cout << "Wooof Wooof!" << endl;
}
