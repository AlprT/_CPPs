#include "HumanB.hpp"

HumanB::HumanB(string name)
{
    this -> m_name = name;
    std::cout << "HumanB " << name << " created with no weapon" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << "HumanB " << this -> m_name << " destroyed" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this -> m_weapon = &weapon;
    std::cout << "HumanB " << this -> m_name << " equipped with a " << weapon.getType() << std::endl;
}

void HumanB::attack()
{
    std::cout << this -> m_name << " attacks with his " << this -> m_weapon->getType() << std::endl;
}
