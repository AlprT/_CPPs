#include "Zombie.hpp"

Zombie* zombieHorde(int N, string name)
{
    Zombie *horde = new Zombie[N];
    for (int i = 0; i < N; i++)
        horde[i].nameSet(name);
    return (horde);
}
