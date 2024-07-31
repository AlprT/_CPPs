#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include "Weapon.hpp"

using std::string;

class HumanB
{
    private:
        string m_name;
        Weapon *m_weapon;
    public:
        HumanB(string name);
        ~HumanB();  
        void setWeapon(Weapon &weapon);
        void attack();
};

#endif
