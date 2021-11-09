#ifndef CPP03_EX03_DIAMONDTRAP_HPP_
# define CPP03_EX03_DIAMONDTRAP_HPP_

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap {
    public:
        DiamondTrap();
        DiamondTrap(const std::string& name);
        ~DiamondTrap();
        DiamondTrap(const DiamondTrap &from);
        DiamondTrap& operator=(const DiamondTrap &rhs);

        void    say(void);
        void    attack(std::string const & target);
        void    whoAmI(void);

        static const unsigned int kInitialHitpoints
            = FragTrap::kInitialHitpoints;
        static const unsigned int kInitialEnergyPoints
            = ScavTrap::kInitialEnergyPoints;
        static const unsigned int kAttackDamage
            = FragTrap::kAttackDamage;

        static void initials(void);

    private:
        const std::string   name_;
};

#endif
