#include "DiamondTrap.hpp"

int main() {
    DiamondTrap nameless = DiamondTrap();
    DiamondTrap me("yokawada");

    nameless.say();
    me.say();
    me.attack("42Tokyo");
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
    me.highFivesGuys();
    me.whoAmI();
    nameless.highFivesGuys();
    nameless.whoAmI();
    nameless.say();
    me.say();
}
