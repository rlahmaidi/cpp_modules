#include "Animal.hpp"

 Animal::Animal()
 {
     std::cout << "Animal default constructor called " << std::endl;
 }

Animal::Animal(const Animal& A)
{
    this->type = A.type;
    std::cout << "Animal copy constructor called " << std::endl;
}

Animal& Animal::operator=(const Animal& A)
{
    this->type = A.type;
    std::cout << "Animal assignement operator called " << std::endl;
    return(*this);
}

std::string Animal::getType(void)
{
    return(this->type);
}
void        Animal::setTrype(std::string _type)
{
    this->type = _type;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called " << std::endl;
}

void    Animal::makesound()
{
    std::cout << "Animal make a sound " << std::endl;
}