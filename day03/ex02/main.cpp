
#include "FragTrap.hpp"

int main()
{
	FragTrap obj1("ClapTrap1");

	obj1.attack("achawahada");
	obj1.takeDamage(5);
	obj1.beRepaired(2);
	obj1.attack("achawahada");
	obj1.takeDamage(7);

}