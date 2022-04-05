#include <iostream>

class ClapTrap
{
private:
std::string name;
int			HitPoint;
int			EnergyPoint;
int			AttackDamage;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &cl);
	~ClapTrap();
	std::string getName();
	int getHitPoint();
	int getEnergy();
	int getAttackDamage();
	void setName(std::string name);
	void setHitPoint(int hitPoint);
	void setEnergy(int energy);
	void setAttackDamage(int attackDamage);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
