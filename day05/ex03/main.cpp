#include "Bureaucrat.hpp"
//#include "Form.hpp"
#include "Intern.hpp"
//#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    std::string s = "leona";
    Bureaucrat	B(s, 1);
	Intern someRandomIntern;
	Form* rrf[4];
	rrf[0] = someRandomIntern.Makeform("PresidentialPardonForm", "Bender");
	rrf[1] = someRandomIntern.Makeform("RobotomyRequestForm", "42");
	rrf[2] = someRandomIntern.Makeform("ShrubberyCreationForm", "1337");
	rrf[3] = someRandomIntern.Makeform("PresiddonForm", "1337");
	std::cout << "\nSign diffrents forms by Elona:" << std::endl;
    //Cout << *rrf[0] << Endl;
    rrf[0]->beSigned(B);
    rrf[1]->beSigned(B);
    rrf[2]->beSigned(B);
    B.executeForm(*rrf[0]);
	B.executeForm(*rrf[1]);
	B.executeForm(*rrf[2]);
    std::cout << *rrf[0] << std::endl;
    delete rrf[0];
	delete rrf[1];
	delete rrf[2];
    return (0);
}