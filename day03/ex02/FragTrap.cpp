#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
}


FragTrap::FragTrap(std::string _name):  ClapTrap(_name)
{
    this->HitPoint = 100;
    this->EnergyPoint = 50;
    this->AttackDamage = 30;
    std::cout <<"FragTrap constructor called" << std::endl;
}
	
// i think the assignement operator is still missing ;

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if(this->getHitPoint() == 0 || this->getEnergyPoint() == 0)
	{
		std::cout << "you are done, good bye" << std::endl;
		exit(0); 
	}
	std::cout << "FragTrap attacks " << target << " causing " << this->getAttackDamage() << " points of damage" << std::endl;
	this->setEnergyPoint(this->getEnergyPoint() - 1);
}

void FragTrap::highFivesGuys()
{
    std::cout <<"high Five Guys" << std::endl;
}