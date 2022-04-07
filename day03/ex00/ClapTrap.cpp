#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string _name): name(_name), HitPoint(10),EnergyPoint(10),AttackDamage(0)
{
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "default destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& c)
{
    this->name = c.name;
    this->HitPoint = c.HitPoint;
    this->EnergyPoint = c.EnergyPoint;
    this->AttackDamage = c.AttackDamage;
    std::cout << " ClapTrap Copy constuctor called" << std::endl;
}

ClapTrap& ClapTrap::operator = (const ClapTrap& c)
{
    this->name = c.name;
    this->HitPoint = c.HitPoint;
    this->EnergyPoint = c.EnergyPoint;
    this->AttackDamage = c.AttackDamage;
    std::cout << "Assignment operator called" << std::endl;
    return (*this);
}

/*******************seters and geters******/

std::string ClapTrap::getName(void) const
{
	return(name);
}
int 	ClapTrap::getHitPoint(void) const
{
	return(HitPoint);
}
int 	ClapTrap::getEnergyPoint(void) const
{
	return(EnergyPoint);
}
int 	ClapTrap::getAttackDamage(void) const
{
	return(AttackDamage);
}
void 	ClapTrap::setName(const std::string& str)
{
	name = str;
}
void 	ClapTrap::setHitPoint(int n)
{
	HitPoint = n ;
}
void 	ClapTrap::setEnergyPoint(int n)
{
	EnergyPoint = n;
}
void 	ClapTrap::setAttackDamage(int n)
{
	AttackDamage = n;
}
/************END OF SETERS AND GETERS*********/

void ClapTrap::attack(const std::string& target)
{
	if(HitPoint == 0 || EnergyPoint == 0)
	{
		std::cout << "you are done, good bye" << std::endl;
		exit(0); 
	}
	std::cout << "ClapTrap attacks " << target << " causing " << AttackDamage << " points of damage" << std::endl;
	EnergyPoint -= 1;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if(HitPoint == 0 || EnergyPoint == 0)
	{
		std::cout << "you are done, good bye" << std::endl;
		exit(0); 
	}
	HitPoint -= amount;
	std::cout << "ClapTrap " << name << " lost " << amount << " hit points" << std::endl;
	std::cout << "ClapTrap " << name << " now got " << HitPoint << " hit points" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(HitPoint == 0 || EnergyPoint == 0)
	{
		std::cout << "you are done, good bye" << std::endl;
		exit(0); 
	}
	HitPoint += amount;
	std::cout << "ClapTrap " << name << " repaired " << amount << " point " << std::endl;
	std::cout << "ClapTrap " << name << " now got " << HitPoint << " hit points" << std::endl;
	EnergyPoint -= 1;
}