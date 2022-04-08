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
            virtual ~Animal();
            std::string getType(void);
            void        setTrype(std::string _type);
            virtual void makesound(void);
};

class Brain
{
    private:
            std::string ideas[100];
    public:
         Brain();
         Brain(const Brain& B);
         Brain& operator=(const Brain& B);
         ~Brain();
};

class Dog:public Animal
{
    private:
        Brain* brain;
    public:
            Dog();
            Dog(const Dog& D);
            Dog& operator=(const Dog& D);
            ~Dog();
             void makesound(void);
};

class Cat:public Animal
{  
    private:
    Brain* brain;
    public:
            Cat();
            Cat(const Cat& C);
            Cat& operator=(const Cat& C);
            ~Cat();
            void makesound(void);
};

