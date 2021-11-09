#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
    : ClapTrap("<nameless>" "_crap_name"), ScavTrap(), FragTrap(),
    name_("<nameless>")
{
    hitpoints_ = DiamondTrap::kInitialHitpoints;
    energy_points_ = DiamondTrap::kInitialEnergyPoints;
    attack_damage_ = DiamondTrap::kAttackDamage;
    std::cout
        << "a nameless DiamondTrap has arrived."
        << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name)
    : ClapTrap(name + "_crap_name"), ScavTrap(name), FragTrap(name),
    name_(name)
{
    hitpoints_ = DiamondTrap::kInitialHitpoints;
    energy_points_ = DiamondTrap::kInitialEnergyPoints;
    attack_damage_ = DiamondTrap::kAttackDamage;
    std::cout
        << "a DiamondTrap "
        << name_
        << " has arrived."
        << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout
        << "DiamondTrap "
        << name_
        << " has been recalled."
        << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &from):
    ClapTrap(from), ScavTrap(from), FragTrap(from)
{
    hitpoints_ = from.hitpoints_;
    energy_points_ = from.energy_points_;
    attack_damage_ = from.attack_damage_;
    std::cout
        << "a DiamondTrap "
        << name_
        << " has duplicated."
        << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &rhs) {
    (std::string)name_ = rhs.name_;
    hitpoints_ = rhs.hitpoints_;
    energy_points_ = rhs.energy_points_;
    attack_damage_ = rhs.attack_damage_;
    return *this;
}

void    DiamondTrap::whoAmI(void) {
    std::cout
        << "My name is: "
        << name_
        << ", and also known as: "
        << ClapTrap::name_
        << std::endl;

}

void    DiamondTrap::attack(std::string const & target) {
    this->ScavTrap::attack(target);
}

void    DiamondTrap::say(void) {
    std::cout
        << "DiamondTrap name: " << name_ << std::endl;
    ClapTrap::say();
}

void    DiamondTrap::initials(void) {
    std::cout
        << "[DiamondTrap Initials]" << std::endl
        << "Initial HP: " << kInitialHitpoints << std::endl
        << "Initial EP: " << kInitialEnergyPoints << std::endl
        << "Initial AD: " << kAttackDamage << std::endl;
}
