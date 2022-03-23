#include "ex00.hpp"

int main()
{
	Zombie	*zomb;

	zomb = newZombie("rachid");
	zomb->announce();
	zomb->setname("chihaja");
	zomb->announce();
	randomChump("lahmaidi");
	return(0);
}