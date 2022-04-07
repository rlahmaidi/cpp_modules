#include "Animal.hpp"

Cat::Cat(): Animal()
{
    this->type = "Cat";
    std::cout << "Cat default constructor called " << std::endl;
}

Cat::Cat(const Cat& C)
{
    this->type = C.type;
    std::cout << "Cat copy constructor called " << std::endl;
}

 Cat& Cat::operator=(const Cat& C)
 {
     this->type = C.type;
     std::cout << "Cat assignement operator called " << std::endl;
     return(*this);
 }

Cat::~Cat()
{
    std::cout << "Cat destructor called " << std::endl;
}

void Cat::makesound(void)
{
    std::cout << "MEOW MEOW (a Cat meowed)" << std::endl;
}