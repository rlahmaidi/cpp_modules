#include "Bureaucrat.hpp"
int main()
{
    Bureaucrat s("suqrat", 150);

    try
    {
        s.decrement();
    }
    catch (Bureaucrat:: GradeTooLowException &b)
    {
        std::cout << b.what() << std::endl;
    }
}