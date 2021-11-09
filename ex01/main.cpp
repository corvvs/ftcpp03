#include "ScavTrap.hpp"

void    say(const std::string& str) {
    std::cout << std::endl << str << std::endl << std::endl;
}

int main() {
    ClapTrap::initials();
    ScavTrap::initials();

    say("[ Construct Objects ]");
    ScavTrap nameless = ScavTrap();
    ScavTrap me("yokawada");

    say("[ Say ]");

    nameless.say();
    me.say();

    say("[ Attack ]");

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
    me.guardGate();
    nameless.guardGate();

    say("[ Say Again ]");
    me.say();
    nameless.say();

    say("[ Finish. ]");
}
