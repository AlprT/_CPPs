#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain *_brain;
	public:
		Dog(void);
		Dog(const string idea);
		Dog(Dog const &copy);
		~Dog(void);
		Dog &operator=(Dog const &copy);

		void			setBrain(const std::string idea);
		void			setBrain(const Brain& newBrain);
		const Brain&	getBrain(void) const;

		void	makeSound(void) const;
};
