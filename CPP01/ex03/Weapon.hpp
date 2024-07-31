#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

using std::string;

class Weapon
{
    private:
        string m_type;
    public:
        Weapon(string type);
        ~Weapon();
        string &getType();
        void setType(string type);
};

#endif
