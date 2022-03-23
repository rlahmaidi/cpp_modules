#include <iostream>

#ifndef WEAPON
#define WEAPON
class Weapon 
{
	private :
	std::string type;

	public:
	const std::string&	getType(void);
	void	setType(std::string type);
};

#endif