#ifndef ZOMBIE
#define ZOMBIE
#include <iostream>

using namespace std;
class Zombie
{
	private:
	string name;
	public:
			Zombie(void);
			Zombie(string str);
			~Zombie();
	
			void	announce(void);
			string	getname(void);
			void	setname(string str);

};

Zombie*	newZombie(string name);
void randomChump(string name);

#endif