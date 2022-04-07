#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
	FragTrap();
	FragTrap(std::string _name);

	~FragTrap();
	void attack(const std::string& target);
	void highFivesGuys(void);
};