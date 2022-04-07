#include "Animal.hpp"

int main()
{
    Animal *a = new Cat;
    Dog dog;
    Cat cat;

    //a = &cat;
    dog.makesound();
    cat.makesound();
    a->makesound();
    return(0);
}