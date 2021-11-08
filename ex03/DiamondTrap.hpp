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
        void    whoAmI(void);

    private:
        const std::string   name_;
};

#endif
