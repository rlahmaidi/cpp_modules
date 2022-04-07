#include "Brain.hpp"

 Brain::Brain()
 {
     std::cout << "Brain default constructor called " << std::endl;
 }

Brain::Brain(const Brain& A)
{
    this->type = A.type;
    std::cout << "Brain copy constructor called " << std::endl;
}

Brain& Brain::operator=(const Brain& A)
{
    this->type = A.type;
    std::cout << "Brain assignement operator called " << std::endl;
    return(*this);
}

Brain::~Brain()
{
    std::cout << "Brain destructor called " << std::endl;
}

void    Brain::makesound()
{
    std::cout << "Brain make a sound " << std::endl;
}