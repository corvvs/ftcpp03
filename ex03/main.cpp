#include "DiamondTrap.hpp"

void    say(const std::string& str) {
    std::cout << std::endl << str << std::endl << std::endl;
}

int main() {
    ClapTrap::initials();
    ScavTrap::initials();
    FragTrap::initials();
    DiamondTrap::initials();

    say("[ Construct Objects ]");
    DiamondTrap nameless = DiamondTrap();
    DiamondTrap me("yokawada");

    say("[ Say ]");
    nameless.say();
    me.say();

    say("[ Attack ]");
    me.ClapTrap::attack("42Tokyo");
    me.ScavTrap::attack("42Tokyo");
    me.FragTrap::attack("42Tokyo");
    me.DiamondTrap::attack("42Tokyo");
    me.attack("42Tokyo");

    say("[ Taking Damage, and Reparied ]");
    me.takeDamage(0);
    me.takeDamage(1);
    me.takeDamage(10000);
    me.takeDamage(10000);
    me.takeDamage(0);
    me.takeDamage(1);
    me.beRepaired(0);
    me.beRepaired(1);
    me.takeDamage(0);
    me.takeDamage(1);
    me.beRepaired(10001);
    me.takeDamage(10000);
    say("[ Specific Methods ]");

    me.highFivesGuys();
    me.guardGate();
    me.whoAmI();
    nameless.highFivesGuys();
    nameless.guardGate();
    nameless.whoAmI();

    say("[ Say Again ]");
    me.say();
    me.ScavTrap::say();
    me.FragTrap::say();
    me.ClapTrap::say();
    nameless.say();

    say("[ Finish. ]");
}
