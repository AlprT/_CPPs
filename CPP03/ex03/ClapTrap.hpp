#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#define Y "\033[33m"
#define RE "\033[0m"
#define R "\033[31m"
#define G "\033[32m"

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class ClapTrap
{
    protected:
        string _Name;
        unsigned int _HP;
        unsigned int _Energy;
        unsigned int _ATK;
    public:
        ClapTrap();
        ClapTrap(string name);
        ClapTrap(const ClapTrap &copy);
        virtual~ClapTrap();

        ClapTrap &operator = (const ClapTrap &copy);

        void attack(string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif
