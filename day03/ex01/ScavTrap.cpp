#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
}


ScavTrap::ScavTrap(std::string _name):  ClapTrap(_name)
{
    this->HitPoint = 100;
    this->EnergyPoint = 50;
    this->AttackDamage = 20;
    std::cout <<"ScavTrap constructor called" << std::endl;
}
	
ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if(this->getHitPoint() == 0 || this->getEnergyPoint() == 0)
	{
		std::cout << "you are done, good bye" << std::endl;
		exit(0); 
	}
	std::cout << "ScavTrap " << this->getName() << " attacks " << target << " causing " << this->getAttackDamage() << " points of damage" << std::endl;
	this->setEnergyPoint(this->getEnergyPoint() - 1);
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode" << std::endl;
}