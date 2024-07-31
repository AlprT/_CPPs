#include "HumanA.hpp"

HumanA::HumanA(string name, Weapon &weapon) : m_name(name), m_weapon(weapon)
{
    std::cout << "HumanA " << name << " created with a " << weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "HumanA " << m_name << " destroyed" << std::endl;
}

void HumanA::attack()
{
    std::cout << m_name << " attacks with his " << this -> m_weapon.getType() << std::endl;
}
