#include <iostream>

class ClapTrap
{
private:
std::string name;
int			HitPoint;
int			EnergyPoint;
int			AttackDamage;
public:
	ClapTrap(std::string name);
	// ClapTrap();
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
