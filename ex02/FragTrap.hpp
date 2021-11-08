#ifndef CPP03_EX02_FRAGTRAP_HPP_
# define CPP03_EX02_FRAGTRAP_HPP_

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
    public:
        FragTrap();
        FragTrap(const std::string& name);
        ~FragTrap();
        FragTrap(const FragTrap &from);
        FragTrap& operator=(const FragTrap &rhs);

        void    highFivesGuys(void);
};

#endif
