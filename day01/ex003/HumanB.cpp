#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

HumanB::~HumanB()
{
	
}

void	attack(HumanB Human)
{
	std::cout << Human.name << "attacks with their" << /*<weapon type> <<*/ std::endl;
}