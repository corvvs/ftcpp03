#ifndef CPP03_EX03_SCAVTRAP_HPP_
# define CPP03_EX03_SCAVTRAP_HPP_

# include "ClapTrap.hpp"

class ScavTrap: public virtual ClapTrap {
    public:
        ScavTrap();
        ScavTrap(const std::string& name);
        ~ScavTrap();
        ScavTrap(const ScavTrap &from);
        ScavTrap& operator=(const ScavTrap &rhs);

        void    guardGate();

        static const unsigned int kInitialHitpoints;
        static const unsigned int kInitialEnergyPoints;
        static const unsigned int kAttackDamage;
};

#endif
