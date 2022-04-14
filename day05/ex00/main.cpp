#include "Bureaucrat.hpp"
int main()
{
    
    Bureaucrat s("suqrat", 150);

    try
    {
        std::cout << s.getName() << " grade is " << s.getGrade() << std::endl;
        s.decrement();
        std::cout << s.getName() << " grade is " << s.getGrade() << std::endl;
    }
    catch (Bureaucrat:: GradeTooLowException &b)
    {
        std::cout << b.what() << std::endl;
    }
    std::cout << s;
    
}