#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"


int main()
{
    std::string h = "General";
    try 
    {
        Bureaucrat c(h, 1);
        ShrubberyCreationForm a("rip");
       // RobotomyRequestForm b("robot");
        //PresidentialPardonForm d("zaphod");

        std::cout  << a;
        // std::cout  << b;
        // std::cout  << d;
       a.beSigned(c);
        //b.BeSigned(c);
        //d.BeSigned(c);
        // std::cout  << a;
        // std::cout  << b;
        // std::cout  << d;
        // a.execute(c);
        //c.executeForm(d);
        // d.execute(c);
    }
    catch (std::exception &e)
    {
        std::cout  << e.what()  <<std::endl;
    }
}