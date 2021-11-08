#ifndef CPP03_EX03_CLAPTRAP_HPP_
# define CPP03_EX03_CLAPTRAP_HPP_

#include <iostream>

class ClapTrap {
    public:
        ClapTrap(void);
        ClapTrap(const std::string& name);
        ~ClapTrap();
        ClapTrap(const ClapTrap &from);
        ClapTrap& operator=(const ClapTrap &rhs);

        const std::string&  getName(void) const;
        unsigned int    getHitpoints(void) const;
        unsigned int    getEnergyPoints(void) const;
        unsigned int    getAttackDamage(void) const;

        void    attack(std::string const & target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        virtual void    say(void);

        static const unsigned int kInitialHitpoints;
        static const unsigned int kInitialEnergyPoints;
        static const unsigned int kAttackDamage;

    protected:
        const std::string   name_;
        unsigned int    hitpoints_;
        unsigned int    energy_points_;
        unsigned int    attack_damage_;
};

#endif