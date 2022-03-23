#include "ex00.hpp"

void	Zombie::announce(void)
{
	cout << this->getname() << " : BraiiiiiiinnnzzzZ" << endl;
}

Zombie*	newZombie(string name)
{
	Zombie	*new_zombie;

	new_zombie = new Zombie;
	new_zombie->setname(name);
	return (new_zombie);
}

void randomChump(string name)
{
	Zombie	new_zombie;

	new_zombie.setname(name);
	new_zombie.announce();
}
