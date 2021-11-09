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

        void    attack(std::string const & target);
        void    guardGate();

        static const unsigned int kInitialHitpoints = 100;
        static const unsigned int kInitialEnergyPoints = 50;
        static const unsigned int kAttackDamage = 20;

        static void initials(void);
};

#endif
