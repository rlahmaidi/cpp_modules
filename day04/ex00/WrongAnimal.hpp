#include <iostream>
#include <string>

class WrongAnimal
{
    protected:
            std::string type;
    public:
            WrongAnimal();
            WrongAnimal(const WrongAnimal& A);
            WrongAnimal& operator=(const WrongAnimal& A);
            ~WrongAnimal();
            std::string getType(void) const;
            void        setTrype(std::string const _type);
            void makesound(void) const;
};

class WrongCat:public WrongAnimal
{  
    public:
            WrongCat();
            WrongCat(const WrongCat& C);
            WrongCat& operator=(const WrongCat& C);
            ~WrongCat();
            void makesound(void) const;
};