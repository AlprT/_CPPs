
#include "Zombie.hpp"

using std::cout;
using std::endl;

Zombie::Zombie()
{}

Zombie::~Zombie()
{
    cout << "Zombie " << this -> m_name << " is DED" << endl;
}

void    Zombie::announce()
{
    cout << this->m_name << ": BraiiiiiiinnnzzzZ..." << endl;
}

void	Zombie::nameSet(string name)
{
	this->m_name = name;
}
