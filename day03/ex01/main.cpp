
#include "ScavTrap.hpp"

int main()
{
	ScavTrap scav("rl");

	scav.attack("someone");
	scav.takeDamage(5);
	scav.beRepaired(5);
	scav.guardGate();
}