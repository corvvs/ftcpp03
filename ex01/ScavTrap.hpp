#ifndef CPP03_EX01_SCAVTRAP_HPP_
# define CPP03_EX01_SCAVTRAP_HPP_

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
    public:
        ScavTrap();
        ScavTrap(const std::string& name);
        ~ScavTrap();
        ScavTrap(const ScavTrap &from);
        ScavTrap& operator=(const ScavTrap &rhs);

        void    guardGate();
};

#endif
