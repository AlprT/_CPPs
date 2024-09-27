#include "Cat.hpp"

Cat::Cat()
{
	cout << "Cat Constructor Called" << endl;
	this->setType("Cat");
}
Cat::~Cat()
{
	cout << "Cat Destructor Called" << endl;
}

Cat::Cat(const Cat& obj)
{
	cout << "Cat copy Constructor Called" << endl;
	*this = obj;
}

Cat& Cat::operator=(const Cat& copy)
{
	cout << "Cat operator Assigment Operator Called" << endl;
	this->_type = copy._type;
	return (*this);
}

void Cat::makeSound() const
{
	cout << "Meooooooowwwwwww" << endl;
}
