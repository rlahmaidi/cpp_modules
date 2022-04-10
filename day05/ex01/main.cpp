#include "Bureaucrat.hpp"
#include "Form.hpp"
int main()
{
    Bureaucrat s("suqrat", 9);
    Form f("form", 10, 20);

    try
    {
        //s.increment();
        f.beSigned(s);
        s.signForm(f);
    }
    catch (Bureaucrat:: GradeTooLowException &b)
    {
        std::cout << b.what() << std::endl;
    }
}