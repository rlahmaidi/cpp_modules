#include "Animal.hpp"

int main()
{
    int i;
    Animal *animal[100] ;

    for(i = 0; i < 50; i++)
    {
        animal[i] = new Cat();
    }
    for(i = 50; i < 100; i++)
    {
        animal[i] = new Dog();
    }
    for(i = 0; i < 100 ; i++)
    {
        delete animal[i];
    }
    return(0);
}

// int main()
// {
// const Animal* j = new Dog();
// const Animal* i = new Cat();
// delete j;//should not create a leak
// delete i;
// while(1);
// return 0;
// }