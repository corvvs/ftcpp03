#include "ScavTrap.hpp" 

ScavTrap::ScavTrap(): ClapTrap() {
    hitpoints_ = 100;
    energy_points_ = 50;
    attack_damage_ = 20;
    std::cout
        << "a nameless ScavTrap has arrived."
        << std::endl;
}

ScavTrap::ScavTrap(const std::string& name): ClapTrap(name) {
    hitpoints_ = 100;
    energy_points_ = 50;
    attack_damage_ = 20;
    std::cout
        << "a ScavTrap "
        << name_
        << " has arrived."
        << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout
        << "ScavTrap "
        << name_
        << " has been recalled."
        << std::endl;
}

void    ScavTrap::guardGate() {
    std::cout
        << "ScavTrap "
        << name_
        << " has been changed its form into Gate keeper mode."
        << std::endl;
}
