#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	cout << "WrongCat Constructor Called" << endl;
	this->setType("WrongCat");
}
WrongCat::~WrongCat()
{
	cout << "WrongCat Destructor Called" << endl;
}

WrongCat::WrongCat(const WrongCat& obj)
{
	cout << "WrongCat copy Constructor Called" << endl;
	*this = obj;
}

WrongCat& WrongCat::operator=(const WrongCat& copy)
{
	cout << "WrongCat operator Assigment Operator Called" << endl;
	this->_type = copy._type;
	return (*this);
}

void WrongCat::makeSound() const
{
	cout << "Meooooooowwwwwww" << endl;
}
