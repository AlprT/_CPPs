#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);

int main()
{
    int size = 20;
    
    Zombie *horde = zombieHorde(size, "Abdülmuzdarip");
    for (int i = 0; i < size; i++)
        horde[i].announce();
    delete [] horde;
}
