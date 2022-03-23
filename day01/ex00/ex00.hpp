#include <iostream>

using namespace std;
class Zombie
{
	private:
	string name;
	public:
			Zombie(void);
			~Zombie();
			void	announce(void);
			Zombie*	newZombie(string name);
			void randomChump(string name);
			string	getname(void)
			{
				return(name);
			}
			void	setname(string str)
			{
				name = str;
			}
};

Zombie::Zombie(void)
{
	cout << "i don't fucking know what to do with this" << endl;
}

Zombie::~Zombie()
{
	cout << "i don't fucking know what to do with this" << endl;
}