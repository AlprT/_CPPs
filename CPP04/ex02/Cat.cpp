#include "Cat.hpp"

Cat::Cat()
{
	cout << "Cat Constructor Called" << endl;
	this->_brain = new Brain();
	this->setType("Cat");
}

Cat::Cat(const string idea)
{
	cout << "Cat parameter constructor called" << endl;
	this->_brain = new Brain(idea);
	this->setType("Cat");
}

Cat::~Cat()
{
	delete this->_brain;
	cout << "Cat Destructor Called" << endl;
}

Cat::Cat(const Cat &copy)
{
	cout << "Cat copy Constructor Called" << endl;
	this->_brain = new Brain(copy.getBrain());
	this->_type = copy.getType();
}

Cat& Cat::operator=(const Cat& other)
{
	cout << "Cat operator Assigment Operator Called" << endl;
	if (this != &other)
	{
		*this->_brain = other.getBrain();
		this->_type = other.getType();
	}
	return (*this);
}

void	Cat::setBrain(const string idea)
{
	delete this->_brain;
	this->_brain = new Brain(idea);
}

void	Cat::setBrain(const Brain& newBrain)
{
	delete this->_brain;
	this->_brain = new Brain(newBrain);
}

const Brain&	Cat::getBrain(void) const
{
	return (*this->_brain);
}

void Cat::makeSound() const
{
	cout << "Meooooooowwwwwww" << endl;
}
