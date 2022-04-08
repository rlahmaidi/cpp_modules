//#include "Animal.hpp"

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

// int main()
// {
// const Animal* meta = new Animal();
// const Animal* j = new Dog();
// const Animal* i = new Cat();

// std::cout << j->getType() << " " << std::endl;
// std::cout << i->getType() << " " << std::endl;
// i->makesound(); //will output the cat sound!
// j->makesound();
// meta->makesound();
// delete meta;
// delete  j;
// delete  i;

// // const Dog dog;
// // const Cat cat;
// // const Cat cat1 = cat;
// // dog.makesound();
// // cat.makesound();
// // cat1.makesound();
// return 0;
// }