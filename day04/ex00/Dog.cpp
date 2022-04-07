#include "Animal.hpp"

Dog::Dog(): Animal()
{
    this->type = "Dog";
    std::cout << "Dog default constructor called " << std::endl;
}

Dog::Dog(const Dog& D)
{
    this->type = D.type;
    std::cout << "Dog copy constructor called " << std::endl;
}

 Dog& Dog::operator=(const Dog& D)
 {
     this->type = D.type;
     std::cout << "Dog assignement operator called " << std::endl;
     return(*this);
 }

Dog::~Dog()
{
    std::cout << "Dog destructor called " << std::endl;
}

void Dog::makesound(void)
{
    std::cout << "HWO WHO (a Dog barked)" << std::endl;
}