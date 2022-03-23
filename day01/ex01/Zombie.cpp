#include "Zombie.hpp"


Zombie::Zombie(void){}

Zombie::Zombie(string str) : name(str)
{
	//this->name = str;
	cout << "constructor called" << endl;
}

Zombie::~Zombie()
{
	cout << "the name of the zombie is : "<< getname()<< endl;
}
string	Zombie::getname(void)
{
	return(this->name);
}
void	Zombie::setname(string str)
{
	this->name = str;
}



void	Zombie::announce(void)
{
	cout << this->getname() << " : BraiiiiiiinnnzzzZ" << endl;
}

Zombie*	newZombie(string name)
{
	Zombie	*new_zombie;

	new_zombie = new Zombie("default");
	new_zombie->setname(name);
	return (new_zombie);
}

void randomChump(string name)
{
	Zombie	new_zombie("default");

	new_zombie.setname(name);
	new_zombie.announce();
}