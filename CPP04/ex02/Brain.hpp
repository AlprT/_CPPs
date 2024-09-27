#pragma once

#include "Animal.hpp"

class Brain
{
private:
    string _ideas[100];
public:
	Brain(void);
	Brain(const string idea);
	Brain(const Brain& copy);
	~Brain(void);
	Brain&	operator=(const Brain& other);
	void			    setIdea(const string idea);
	void			    setIdea(unsigned int idx, const string idea);
	const string    &getIdea(void) const;
	const string    &getIdea(unsigned int idx) const;
};
