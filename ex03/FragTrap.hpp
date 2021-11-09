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

        void    attack(std::string const & target);
        void    highFivesGuys(void);

        static const unsigned int kInitialHitpoints = 100;
        static const unsigned int kInitialEnergyPoints = 100;
        static const unsigned int kAttackDamage = 30;

        static void initials(void);
};

#endif
