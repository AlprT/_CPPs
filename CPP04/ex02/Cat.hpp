#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain *_brain;
	public:
		Cat(void);
		Cat(const string idea);
		Cat(Cat const &copy);
		~Cat(void);
		Cat &operator=(Cat const &copy);

		void			setBrain(const std::string idea);
		void			setBrain(const Brain& newBrain);
		const Brain&	getBrain(void) const;

		void	makeSound(void) const;
};
