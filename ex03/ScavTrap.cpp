#include "ScavTrap.hpp" 

const unsigned int ScavTrap::kInitialHitpoints = 100;
const unsigned int ScavTrap::kInitialEnergyPoints = 50;
const unsigned int ScavTrap::kAttackDamage = 20;

ScavTrap::ScavTrap(): ClapTrap() {
    hitpoints_ = ScavTrap::kInitialHitpoints;
    energy_points_ = ScavTrap::kInitialEnergyPoints;
    attack_damage_ = ScavTrap::kAttackDamage;
    std::cout
        << "a nameless ScavTrap has arrived."
        << std::endl;
}

ScavTrap::ScavTrap(const std::string& name): ClapTrap(name) {
    hitpoints_ = ScavTrap::kInitialHitpoints;
    energy_points_ = ScavTrap::kInitialEnergyPoints;
    attack_damage_ = ScavTrap::kAttackDamage;
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

ScavTrap::ScavTrap(const ScavTrap &from):
    ClapTrap(from)
{
    hitpoints_ = from.hitpoints_;
    energy_points_ = from.energy_points_;
    attack_damage_ = from.attack_damage_;
    std::cout
        << "a ScavTrap "
        << name_
        << " has duplicated."
        << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &rhs) {
    (std::string)name_ = rhs.name_;
    hitpoints_ = rhs.hitpoints_;
    energy_points_ = rhs.energy_points_;
    attack_damage_ = rhs.attack_damage_;
    return *this;
}

void    ScavTrap::guardGate() {
    std::cout
        << "ScavTrap "
        << name_
        << " has been changed its form into Gate keeper mode."
        << std::endl;
}
