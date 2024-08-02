#include "Zombie.hpp"

using std::cout;
using std::endl;

void Zombie::announce(void)
{
    cout << this -> m_name << ": BraiiiiiiinnnzzzZ..." << endl;
}

Zombie::Zombie(string name)
{
    this -> m_name = name;
    cout << "Zombie " << this -> m_name << " is woke up" << endl;
}

Zombie::~Zombie()
{
    cout << "Zombie " << this -> m_name << " is DED" << endl;
}
