#include "Bureaucrat.hpp"
#include "Form.hpp"


Bureaucrat::GradeTooHighException::GradeTooHighException() throw()
{
    
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{
    
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade Too Hight");
}


Bureaucrat::GradeTooLowException::GradeTooLowException() throw()
{
    
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{
    
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade Too Low");
}

Bureaucrat::Bureaucrat(void)
{
    std::cout << "Bureaucrat default constructor called " << std::endl;
}

Bureaucrat::Bureaucrat(std::string _name, int _grade): name(_name)
{
    std::cout << "Bureaucrat parametrized constructor called " << std::endl;
    if(_grade > 150)
        throw (GradeTooLowException());
    else if(_grade < 1)
        throw (GradeTooHighException());
    this->grade = _grade;
}

Bureaucrat::~Bureaucrat(void)
{
    std::cout << "Bureaucrat default destructor called " << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& B): name(B.name)
{
    this->grade = B.grade;
    std::cout << "Bureaucrat copy constructor called " << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& B)
{
    this->grade = B.grade;
    std::cout << "Bureaucrat assignement operator  called " << std::endl;
    return(*this);
}

int Bureaucrat::getGrade(void) const
{
    return(this->grade);
}

void Bureaucrat::setGrade(int _grade)
{
    this->grade = _grade;
}

const std::string  Bureaucrat::getName(void) const
{
    return(this->name);
}

void        Bureaucrat::increment(void)
{
    if (grade == 1)
        throw(GradeTooHighException());
    grade--;
}

void        Bureaucrat::decrement()
{
    if (grade == 150)
        throw (GradeTooLowException());
    else
        grade++;
}

std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs)
{
    o << rhs.getName() << " bureaucrat grade " << rhs.getGrade();
    return o;
}

 //ex01
void    Bureaucrat::signForm( Form & form )
{
    form.beSigned(*this); // to try : we can chec on the return of this to return our message
    if(this->grade <= form.getSignGrade())
        std::cout << this->name << " signed " << form.getName() << std::endl;
    else
         std::cout << this->name << " couldn't sign " << form.getName()  << " because it's grade is too low" << std::endl;
}
