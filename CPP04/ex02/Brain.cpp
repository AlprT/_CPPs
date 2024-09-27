#include "Brain.hpp"

Brain::Brain(void)
{
	cout << "Default constructor called (Brain)" << endl;
	setIdea("");
}

Brain::Brain(const string idea)
{
	cout << "Idea parameterized constructor called (Brain)" << endl;
	setIdea(idea);
}

Brain::Brain(const Brain& copy)
{
	cout << "Copy constructor called (Brain)" << endl;
	*this = copy;
}

Brain::~Brain(void)
{
	cout << "Destructor called (Brain)" << endl;
}

Brain&	Brain::operator=(const Brain& other)
{
	cout << "Copy assignment operator called (Brain)" << endl;
	if (this != &other)
	{
		setIdea(other.getIdea());
	}
	return (*this);
}

void	Brain::setIdea(const string idea)
{
	for (int idx = 0; idx < 100; idx++)
		this->_ideas[idx] = idea;
}

void	Brain::setIdea(unsigned int idx, const string idea)
{
	if (idx < 0 || 99 < idx)
		return ;
	this->_ideas[idx] = idea;
}

const string&	Brain::getIdea(void) const
{
	return (this->_ideas[0]);
}

const string&	Brain::getIdea(unsigned int idx) const
{
	if (idx > 99)
		idx = 0;
	return (this->_ideas[idx]);
}
