#ifndef CPP03_EX01_CLAPTRAP_HPP_
# define CPP03_EX01_CLAPTRAP_HPP_

#include <iostream>

class ClapTrap {
    public:
        ClapTrap(void);
        ClapTrap(const std::string& name);
        ~ClapTrap(void);
        ClapTrap(const ClapTrap &from);
        ClapTrap& operator=(const ClapTrap &rhs);

        const std::string&  getName(void) const;
        unsigned int    getHitpoints(void) const;
        unsigned int    getEnergyPoints(void) const;
        unsigned int    getAttackDamage(void) const;

        virtual void    attack(std::string const & target);
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);
        virtual void    say(void);

        static const unsigned int kInitialHitpoints = 10;
        static const unsigned int kInitialEnergyPoints = 10;
        static const unsigned int kAttackDamage = 0;

        static void initials(void);

    protected:
        const std::string   name_;
        unsigned int    hitpoints_;
        unsigned int    energy_points_;
        unsigned int    attack_damage_;
};

#endif
