#include "FragTrap.hpp"

int main() {
    FragTrap nameless = FragTrap();
    FragTrap me("yokawada");

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
    nameless.highFivesGuys();
}
