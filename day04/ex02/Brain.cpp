#include "Animal.hpp"

 Brain::Brain()
 {
     int i;

     for(i = 0; i < 100; i++)
    {
        ideas[i] = "idea" + std::to_string(i);
    }
     std::cout << "Brain default constructor called " << std::endl;
 }

Brain::Brain(const Brain& B)
{
    int i;

    for(i = 0; i < 100; i++)
    {
        ideas[i] = B.ideas[i];
    }
    std::cout << "Brain copy constructor called " << std::endl;
}

Brain& Brain::operator=(const Brain& B)
{
    int i ;

    for(i = 0; i < 100; i++)
    {
        ideas[i] = B.ideas[i];
    }
    std::cout << "Brain assignement operator called " << std::endl;
    return(*this);
}

Brain::~Brain()
{
    std::cout << "Brain destructor called " << std::endl;
}
