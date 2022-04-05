#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string _name): name(_name), HitPoint(10),EnergyPoint(10),AttackDamage(0)
{
	std::cout << "default constructor to initialize name" << std::endl;
}

// ClapTrap::ClapTrap():HitPoint(10),EnergyPoint(10),AttackDamage(0)
// {
// 	std::cout << "default constructor to intialize values" << std::endl;
// }

// operator=

ClapTrap::ClapTrap(ClapTrap const &cl){

	this->name = cl.name;
	*this = cl
}

ClapTrap::~ClapTrap()
{
	std::cout << "default destructor called" << std::endl;
}

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