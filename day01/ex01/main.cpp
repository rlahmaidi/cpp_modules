#include "Zombie.hpp"
Zombie* ZombieHorde(int N, string name);

int main()
{
	Zombie	*zombie_table;
	//int	i;

	zombie_table = ZombieHorde(10,"rachid");
	delete [] zombie_table;
	return(0);
}