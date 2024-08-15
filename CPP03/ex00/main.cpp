#include "ClapTrap.hpp"

int main()
{
	ClapTrap a;
	ClapTrap b("Cody");

	cout << endl;
	a.attack("Cody");
	a.beRepaired(5);
	b.attack("John");
	b.takeDamage(7);
	b.beRepaired(35);
	cout << endl;
	return (0);
}
