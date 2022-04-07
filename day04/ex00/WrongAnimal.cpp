#include "WrongAnimal.hpp"

 WrongAnimal::WrongAnimal()
 {
     std::cout << "WrongAnimal default constructor called " << std::endl;
 }

WrongAnimal::WrongAnimal(const WrongAnimal& A)
{
    this->type = A.type;
    std::cout << "WrongAnimal copy constructor called " << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& A)
{
    this->type = A.type;
    std::cout << "WrongAnimal assignement operator called " << std::endl;
    return(*this);
}

std::string WrongAnimal::getType(void) const
{
    return(this->type);
}
void        WrongAnimal::setTrype(std::string const _type)
{
    this->type = _type;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called " << std::endl;
}

void    WrongAnimal::makesound() const
{
    std::cout << "WrongAnimal make a sound " << std::endl;
}