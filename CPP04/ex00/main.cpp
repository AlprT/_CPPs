#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal *m = new WrongAnimal();
	const WrongAnimal *n = new WrongCat();
	cout << endl << j->getType() << " " << endl;
	cout << i->getType() << " " << endl;
	cout << m->getType() << " " << endl;
	cout << n->getType() << " " << endl << endl;
	i->makeSound(); //cat
	j->makeSound();	//dog
	m->makeSound();
	n->makeSound();
	meta->makeSound();
	cout << endl;
	delete meta;
	delete j;
	delete i;
	delete m;
	delete n;
	return 0;
}
