
#include "ScavTrap.hpp"

int main()
{
	ClapTrap *obj1 = new ScavTrap("eel");
	ScavTrap scav("test");

	obj1->attack("achawahad");
	obj1->takeDamage(5);
	obj1->attack("achawahad");
	obj1->takeDamage(5);
	obj1->attack("achawahad");
	obj1->takeDamage(5);
	obj1->beRepaired(10);
	obj1->beRepaired(10);
	std::cout <<obj1->getName() << std::endl;
	//jdfkldfjlkdfjd
	//scav.attack("any name");
	// scav.takeDamage(100);
	// scav.beRepaired(100);
	std::cout <<scav.getName() << std::endl;
	delete obj1;

}