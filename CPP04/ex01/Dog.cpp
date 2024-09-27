#include "Dog.hpp"

Dog::Dog()
{
	cout << "Dog Constructor Called" << endl;
	this->_brain = new Brain();
	this->setType("Dog");
}

Dog::Dog(const string idea)
{
	cout << "Dog parameter constructor called" << endl;
	this->_brain = new Brain(idea);
	this->setType("Dog");
}

Dog::~Dog()
{
	delete this->_brain;
	cout << "Dog Destructor Called" << endl;
}

Dog::Dog(const Dog &copy)
{
	cout << "Dog copy Constructor Called" << endl;
	this->_brain = new Brain(copy.getBrain());
	this->_type = copy.getType();
}

Dog& Dog::operator=(const Dog& other)
{
	cout << "Dog operator Assigment Operator Called" << endl;
	if (this != &other)
	{
		*this->_brain = other.getBrain();
		this->_type = other.getType();
	}
	return (*this);
}

void	Dog::setBrain(const string idea)
{
	delete this->_brain;
	this->_brain = new Brain(idea);
}

void	Dog::setBrain(const Brain& newBrain)
{
	delete this->_brain;
	this->_brain = new Brain(newBrain);
}

const Brain&	Dog::getBrain(void) const
{
	return (*this->_brain);
}

void Dog::makeSound() const
{
	cout << "Woof Woof!" << endl;
}
