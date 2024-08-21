#include "ScavTrap.hpp"

int main()
{
	cout << endl;

	ScavTrap a;
	ScavTrap b("Cody");

	cout << endl;
	a.attack("Emanuel");
	a.guard_gate();
	a.guard_gate();
	a.takeDamage(7);
	a.beRepaired(5);
	b.attack("Karen");
	b.guard_gate();
	b.guard_gate();
	b.takeDamage(7);
	b.beRepaired(35);
	cout << endl;
}
