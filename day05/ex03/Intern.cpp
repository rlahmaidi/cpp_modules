#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "intern default constructor called " << std::endl;
}

Intern::Intern(Intern const &src)
{
	std::cout << "Intern::Copy constructor called." << std::endl;
	(void)src;
}

Intern &		Intern::operator=( Intern const & rhs )
{
    std::cout << "intern copy assignement operator called " << std::endl;
	(void) rhs;
	return (*this);
}
Intern::~Intern()
{
        std::cout << "intern default destructor called " << std::endl;
}

Form*	Intern::Makeform(std::string form,std::string name)
{
	size_t i;

	std::string names[] = {"robotomy request","shrubbery creation","presidential pardon"};
	Form* (Intern::*fct[])(std::string) = 
	{
		&Intern::RobotomyRequest, &Intern::ShrubberyCreation, &Intern::PresidentialPardon, &Intern::nothing
	};
	for (i = 0; i < 3; i++)
	{
		if (names[i] == form)
			break ;
	}
	if (i < 3)
		std::cout << "Intern create " << names[i] << " form" << std::endl;
	return((this->*fct[i])(name));
}

Form*	Intern::PresidentialPardon(std::string name)
{
	Form *l = new PresidentialPardonForm(name);
	return(l);
}

Form*	Intern::ShrubberyCreation(std::string name)
{
	Form *l = new ShrubberyCreationForm(name);
	return(l);
}

Form*	Intern::RobotomyRequest(std::string name)
{
	Form *l = new RobotomyRequestForm(name);
	return(l);
}

Form*	Intern::nothing(std::string name)
{
	(void)name;
	// return(NULL);
	std::cout << "\n this form type dosen't exist" << std::endl;
	Form *l = new RobotomyRequestForm("nada");
	return(l);
}