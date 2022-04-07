#include "WrongAnimal.hpp"


int main()
{
const WrongAnimal* meta = new WrongAnimal();
//const WrongAnimal* j = new Dog();
const WrongAnimal* i = new WrongCat();
////std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makesound(); //will output the cat sound!
//j->makeSound();
meta->makesound();
delete meta;
delete i;
return 0;
}