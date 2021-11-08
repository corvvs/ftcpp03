#ifndef CPP03_EX03_FRAGTRAP_HPP_
# define CPP03_EX03_FRAGTRAP_HPP_

# include "ClapTrap.hpp"

class FragTrap: public virtual ClapTrap {
    public:
        FragTrap();
        FragTrap(const std::string& name);
        ~FragTrap();
        FragTrap(const FragTrap &from);
        FragTrap& operator=(const FragTrap &rhs);

        void    highFivesGuys(void);

        static const unsigned int kInitialHitpoints;
        static const unsigned int kInitialEnergyPoints;
        static const unsigned int kAttackDamage;
};

#endif
