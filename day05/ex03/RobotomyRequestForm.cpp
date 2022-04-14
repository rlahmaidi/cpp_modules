#include "RobotomyRequestForm.hpp"
#include <string>

RobotomyRequestForm::RobotomyRequestForm(void)
{
    std::cout << "RobotomyRequestForm default constructor called " << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(std::string const &target): Form("RobotomyRequestForm",72, 45, target)
{
    std::cout << "RobotomyRequestForm parametrized constructor called " << std::endl;

}
RobotomyRequestForm::~RobotomyRequestForm(void)
{
        std::cout << "RobotomyRequestForm default destructor called " << std::endl;

}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& sh)
{
    *this = sh;
}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& sh)
{
    Form::operator=(sh);
	return(*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    // srand(time(0));
    // int rands = rand();
    static int rands = 0;
    rands++;
    if (getSign() == true  && getExcuteGrade() >= executor.getGrade())
    {
        if (rands % 2 == 0)
            std::cout << "< " << getTarget() << " >" << "has been robotmized successfully" << std::endl;
        else
            std::cout << "< " << getTarget() << " >" << "has failed to be robotomized" << std::endl;
    }
    else
        throw Form::GradeTooLowException();
}