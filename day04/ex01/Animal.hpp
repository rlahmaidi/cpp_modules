#include <iostream>
#include <string>

class Animal
{
    protected:
            std::string type;
    public:
            Animal();
            Animal(const Animal& A);
            Animal& operator=(const Animal& A);
            ~Animal();
            std::string getType(void);
            void        setTrype(std::string _type);
            virtual void makesound(void);
};

class Dog:public Animal
{
    public:
            Dog();
            Dog(const Dog& D);
            Dog& operator=(const Dog& D);
            ~Dog();
             void makesound(void);
};

class Cat:public Animal
{  
    public:
            Cat();
            Cat(const Cat& C);
            Cat& operator=(const Cat& C);
            ~Cat();
            void makesound(void);
};

class Brain
{
    protected:
            std::string type;
    public:
         Brain();
         Brain(const Brain& A);
         Brain& operator=(const Brain& A);
         ~Brain();
};