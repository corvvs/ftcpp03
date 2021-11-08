#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() {
    hitpoints_ = 100;
    energy_points_ = 100;
    attack_damage_ = 30;
    std::cout
        << "a nameless FragTrap has arrived."
        << std::endl;
}

FragTrap::FragTrap(const std::string& name): ClapTrap(name) {
    hitpoints_ = 100;
    energy_points_ = 100;
    attack_damage_ = 30;
    std::cout
        << "a FragTrap "
        << name_
        << " has arrived."
        << std::endl;
}

FragTrap::~FragTrap() {
    std::cout
        << "FragTrap "
        << name_
        << " has been recalled."
        << std::endl;
}

FragTrap::FragTrap(const FragTrap &from):
    ClapTrap(from)
{
    hitpoints_ = from.hitpoints_;
    energy_points_ = from.energy_points_;
    attack_damage_ = from.attack_damage_;
    std::cout
        << "a FragTrap "
        << name_
        << " has duplicated."
        << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &rhs) {
    (std::string)name_ = rhs.name_;
    hitpoints_ = rhs.hitpoints_;
    energy_points_ = rhs.energy_points_;
    attack_damage_ = rhs.attack_damage_;
    return *this;
}

void    FragTrap::highFivesGuys(void) {
    std::cout
        << "FragTrap "
        << name_
        << " sayed: \"Please Please Please Please Please Please high five with me me me me!!\""
        << std::endl;
}
