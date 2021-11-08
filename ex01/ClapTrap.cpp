#include "ClapTrap.hpp" 

ClapTrap::ClapTrap():
    name_("<nameless>"),
    hitpoints_(10),
    energy_points_(10),
    attack_damage_(0)
{
    std::cout
        << "a nameless ClapTrap has arrived."
        << std::endl;
}

ClapTrap::ClapTrap(const std::string& name):
    name_(name),
    hitpoints_(10),
    energy_points_(10),
    attack_damage_(0)
{
    std::cout
        << "a ClapTrap "
        << name_
        << " has arrived."
        << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout
        << "ClapTrap "
        << name_
        << " has been recalled."
        << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &from):
    name_(from.name_),
    hitpoints_(from.hitpoints_),
    energy_points_(from.energy_points_),
    attack_damage_(from.attack_damage_)
    {}

ClapTrap& ClapTrap::operator=(const ClapTrap &rhs) {
    (std::string)name_ = rhs.name_;
    hitpoints_ = rhs.hitpoints_;
    energy_points_ = rhs.energy_points_;
    attack_damage_ = rhs.attack_damage_;
    return *this;
}

const std::string&  ClapTrap::getName(void) const {
    return name_;
}

unsigned int    ClapTrap::getHitpoints(void) const {
    return hitpoints_;
}

unsigned int    ClapTrap::getEnergyPoints(void) const {
    return energy_points_;
}

unsigned int    ClapTrap::getAttackDamage(void) const {
    return attack_damage_;
}

void    ClapTrap::attack(std::string const & target) {
    std::cout
        << "ClapTrap "
        << name_
        << " attacks "
        << target
        << ", causing "
        << attack_damage_
        << " points of damage!"
        << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount) {
    if (hitpoints_ == 0) {
        std::cout
            << "ClapTrap "
            << name_
            << " has been attacked, but it's already broken..."
            << std::endl;
    } else if (amount == 0) {
        std::cout
            << "ClapTrap "
            << name_
            << " has been attacked, but unaffected nothing."
            << std::endl;
    } else if (amount >= hitpoints_) {
        std::cout
            << "ClapTrap "
            << name_
            << " taken "
            << hitpoints_
            << " damage, and destroyed!!"
            << std::endl;
        hitpoints_ = 0;
    } else {
        hitpoints_ -= amount;
        std::cout
            << "ClapTrap "
            << name_
            << " taken "
            << amount
            << " damage."
            << std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount) {
    hitpoints_ += amount;
    if (amount == 0) {
        std::cout << "Pardon?" << std::endl;
    } else {
        std::cout
            << "ClapTrap "
            << name_
            << " has been repaired, and gained "
            << amount
            << " hitpoints."
            << std::endl;
    }
}
