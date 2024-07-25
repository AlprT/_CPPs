#include "Zombie.hpp"

Zombie	*newZombie(string name);
void	randomChump(string name);

int main()
{
    Zombie *zombie = newZombie("Murat");
    zombie->announce();
    randomChump("Abdülmuzdarip");
    delete zombie;
}
