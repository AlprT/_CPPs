#pragma once

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(WrongCat const &copy);
		~WrongCat(void);
		WrongCat &operator=(WrongCat const &copy);

		void	makeSound(void) const;
};
