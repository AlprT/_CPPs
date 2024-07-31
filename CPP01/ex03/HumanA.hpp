#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include "Weapon.hpp"

using std::string;

class HumanA
{
    private:
        string m_name;
        Weapon &m_weapon;
    public:
        HumanA(string name, Weapon &weapon);
        ~HumanA();
        void attack();
};

#endif
