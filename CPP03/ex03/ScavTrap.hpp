#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{   
    private:
        bool _guarding_gate;
    public:
        ScavTrap();
        ScavTrap(const string name);
        ScavTrap(ScavTrap &copy);
        ~ScavTrap();

        ScavTrap &operator=(const ScavTrap &src);

        void attack(const string &target);
        void guard_gate();
};

#endif
