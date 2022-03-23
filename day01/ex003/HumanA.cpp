#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon)
{
	this->name = name;
	this->weapon = weapon;
}

HumanA::~HumanA()
{
	
}

void	attack(HumanA Human)
{
	std::cout << Human.name << "attacks with their" << /*<weapon type> <<*/ std::endl;
}