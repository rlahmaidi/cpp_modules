#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::GradeTooHighException::GradeTooHighException() throw()
{
    
}

Form::GradeTooHighException::~GradeTooHighException() throw()
{
    
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("signGrade Too Hight Exception");
}


Form::GradeTooLowException::GradeTooLowException() throw()
{
    
}

Form::GradeTooLowException::~GradeTooLowException() throw()
{
    
}

const char* Form::GradeTooLowException::what() const throw()// should i initialize them here too??
{
    return ("Grade Too Low Exception");
}

Form::Form() : sign(false),signGrade(0), excuteGrade(0)
{
    std::cout << "Form default constructor called " << std::endl;
}
Form::~Form()
{
    std::cout << "Form default destructor called " << std::endl;
}
Form::Form(const Form& F) : sign(false),signGrade(0), excuteGrade(0)
{
    this->sign = F.sign;
}
Form& Form::operator=(const Form& F)
{
    this->sign = F.sign;
    return *this;
}

Form::Form(const std::string _name, const int _signGrade, const int _excuteGrade):name(_name),sign(false), signGrade(_signGrade),excuteGrade(_excuteGrade)
{
    std::cout << "Form parametrized constructor called " << std::endl;
}

/**********seters and geters*********/
std::string Form::getName(void) const
{
    return(this->name);
}
bool              Form::getSign(void) const
{
    return(this->sign);
}
int         Form::getSignGrade(void) const
{
    return(this->signGrade);
}
int         Form::getExcuteGrade(void) const
{
    return(this->excuteGrade);
}

void              Form::setSign(bool    _sign)
{
    this->sign = _sign;
}

/**********end of seters and geters******/

bool    Form::beSigned(Bureaucrat& B)
{
    if(B.getGrade() > signGrade)
        throw (GradeTooLowException());
    else
        sign = true;
    return(sign);
}

std::ostream & operator<<( std::ostream & o, Form const & rhs)
{
    if (rhs.getSign() == true)
        o << rhs.getName() << " exec grade: " << rhs.getExcuteGrade() << " signe grade: " << rhs.getSignGrade() << " signed";
    else
        o << rhs.getName() << " exec grade: " << rhs.getExcuteGrade() << " signe grade: " << rhs.getSignGrade() << " not signed";
    return o;
}