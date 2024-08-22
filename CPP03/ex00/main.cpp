#include "ClapTrap.hpp"

int main()
{
	cout << R << "ClapTrap tests:" << RE << endl;
	{
		ClapTrap a;
		ClapTrap b("Cody");

		cout << endl;
		a.attack("Emanuel");
		a.takeDamage(7);
		a.beRepaired(5);
		b.attack("Karen");
		b.takeDamage(7);
		b.beRepaired(35);
		cout << endl;
	}
}
