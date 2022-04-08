#include "WrongAnimal.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
    this->type = "WrongCat";
    std::cout << "WrongCat default constructor called " << std::endl;
}

WrongCat::WrongCat(const WrongCat& C)
{
    this->type = C.type;
    std::cout << "WrongCat copy constructor called " << std::endl;
}

 WrongCat& WrongCat::operator=(const WrongCat& C)
 {
     this->type = C.type;
     std::cout << "WrongCat assignement operator called " << std::endl;
     return(*this);
 }

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called " << std::endl;
}

void WrongCat::makesound(void) const
{
    std::cout << "MEOW MEOW (a WrongCat meowed)" << std::endl;
}