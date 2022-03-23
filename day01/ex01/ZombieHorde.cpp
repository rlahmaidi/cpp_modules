#include "Zombie.hpp"

Zombie* ZombieHorde(int N , string Name)
{
	Zombie	*new_zombie;
	int i;

	//(void)Name;
	new_zombie = new Zombie[N];
	i = 0;
	while(i < N)
	{
		new_zombie[i].setname(Name + " " + std::to_string(i));
		// std::cout << new_zombie[i].getname() << std::endl;
		new_zombie[i].announce();
		i++;
	}
	return(new_zombie);
}
