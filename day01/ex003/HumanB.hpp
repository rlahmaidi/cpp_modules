#include <iostream>
#include "Weapon.hpp"

#ifndef HUMANB
#define HUMANB

class HumanB
{
	public :
	HumanB();
	HumanB(std::string name);
	~HumanB();
	Weapon		weapon;
	std::string	name;
	void	attacke();

};
#endif