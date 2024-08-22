#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : virtual public ScavTrap, virtual public FragTrap
{
    private:
        string _name;
    public:
        DiamondTrap();
        DiamondTrap(const string name);
        DiamondTrap(DiamondTrap &copy);
        ~DiamondTrap();

        DiamondTrap &operator=(const DiamondTrap &src);

        void whoAmI();
};

#endif
