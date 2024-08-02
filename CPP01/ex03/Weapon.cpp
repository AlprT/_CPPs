#include "Weapon.hpp"

Weapon::Weapon(string type)
{
    this -> m_type = type;
}

Weapon::~Weapon()
{
}

void Weapon::setType(string type)
{
    this -> m_type = type;
}

string& Weapon::getType()
{
    return this -> m_type;
}
