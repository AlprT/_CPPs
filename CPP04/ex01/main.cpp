#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	Animal* cat = new Cat("WorldEaterB344");
	cat->setType("Potato");
	delete cat;
	cout << endl;
	const Animal* animals[10];
	for (int i = 0; i < 4; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog("I am a dog");
		else
			animals[i] = new Cat("I am a cat");
	}
	cout << endl;
	for (int i = 0; i < 4; i++)
	{
		animals[i]->makeSound();
	}
	cout << endl;
	for (int i = 0; i < 4; i++)
	{
		delete animals[i];
	}
	cout << endl;

	std::cout << "-------------------------------------\n";
	{
		std::cout << "Check deep copy\n" << std::endl;
		Dog *dogA = new Dog;
		Dog *dogB = new Dog(*dogA);

		delete dogA;
		delete dogB;
	}

	return (0);
}
