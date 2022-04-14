// #include "ShrubberyCreationForm.hpp"
// #include "RobotomyRequestForm.hpp"
// #include "PresidentialPardonForm.hpp"
// #include "Bureaucrat.hpp"


// int main()
// {
//     std::string h = "General";
//     try 
//     {
//         Bureaucrat c(h, 1);
//         ShrubberyCreationForm a("rip");
//         RobotomyRequestForm b("robot");
//         //PresidentialPardonForm d("zaphod");

//         std::cout  << a;
//         // std::cout  << b;
//         // std::cout  << d;
//        a.beSigned(c);
//         b.beSigned(c);
//         //d.BeSigned(c);
//         // std::cout  << a;
//          //std::cout  << b;
//         // std::cout  << d;
//         // a.execute(c);
//         //c.executeForm(d);
//         // d.execute(c);
//     }
//     catch (std::exception &e)
//     {
//         std::cout  << e.what()  <<std::endl;
//     }
// }

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	Form* shrubberyForm = new ShrubberyCreationForm("Garden");
	Form* robotomyForm = new RobotomyRequestForm("Well");
	Form* presidentialPardonForm = new PresidentialPardonForm("Fred");
	Bureaucrat	bureaucrat1("le maire", 1);

	try
	{
		bureaucrat1.signForm(*shrubberyForm);
		bureaucrat1.signForm(*robotomyForm);
		bureaucrat1.signForm(*presidentialPardonForm);
		bureaucrat1.executeForm(*shrubberyForm);
		bureaucrat1.executeForm(*robotomyForm);
	    bureaucrat1.executeForm(*presidentialPardonForm);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	std::cout << bureaucrat1 << std::endl;
	std::cout << *shrubberyForm << std::endl;
	std::cout << *robotomyForm << std::endl;
	std::cout << *presidentialPardonForm << std::endl;
	return 0;
}