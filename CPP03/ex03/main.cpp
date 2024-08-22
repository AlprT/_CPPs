#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	cout << R << "ClapTrap tests:" << RE << endl;
	{
		ClapTrap a;
		ClapTrap b("Rosemary");

		cout << endl;
		a.attack("Emanuel");
		a.takeDamage(7);
		a.beRepaired(5);
		b.attack("Karen");
		b.takeDamage(7);
		b.beRepaired(35);
		cout << endl;
	}
	cout << endl << R << "ScavTrap tests:" << RE << endl;
	{
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
	cout << endl << R << "FragTrap tests:" << RE << endl;
	{
		FragTrap a;
		FragTrap b("Chengiz Khan");

		cout << endl;
		a.attack("Emanuel");
		a.highFivesGuys();
		a.highFivesGuys();
		a.takeDamage(7);
		a.beRepaired(5);
		b.attack("Karen");
		b.highFivesGuys();
		b.highFivesGuys();
		b.takeDamage(7);
		b.beRepaired(35);
		cout << endl;
	}
	cout << endl << R << "DiamondTrap tests:" << RE << endl;
	{
		DiamondTrap a;
		DiamondTrap b("Napoleon"); 

		cout << endl;
		a.attack("Emanuel");
		a.highFivesGuys();
		a.highFivesGuys();
		a.takeDamage(7);
		a.beRepaired(5);
		b.attack("Karen");
		b.highFivesGuys();
		b.highFivesGuys();
		b.takeDamage(7);
		b.beRepaired(35);
		a.whoAmI();
		b.whoAmI();
		cout << endl;
	}
}
