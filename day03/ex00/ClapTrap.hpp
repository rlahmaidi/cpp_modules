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
	ClapTrap(const ClapTrap& c);

	ClapTrap& operator = (const ClapTrap& c);

	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	/**************SETERS AND GETERS****************/
	std::string getName(void) const;
	int 		getHitPoint(void) const;
	int 		getEnergyPoint(void) const;
	int 		getAttackDamage(void) const;
	void 		setName(const std::string& str);
	void 		setHitPoint(int n);
	void 		setEnergyPoint(int n);
	void 		setAttackDamage(int n);
	/**********end of seters and geters******/
	
};
