#include <iostream>
#include "Weapon.hpp"

#ifndef HUMANA
#define HUMANA

class HumanA
{
	public :
	HumanA();
	HumanA::HumanA(std::string name, Weapon weapon);
	HumanA::~HumanA();
	Weapon		weapon;
	std::string	name;
	void	attacke();

};
#endif