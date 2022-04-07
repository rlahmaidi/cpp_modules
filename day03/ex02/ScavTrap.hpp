#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
	ScavTrap();
	ScavTrap(std::string _name);

	~ScavTrap();
	void attack(const std::string& target);
	void guardGate();
};