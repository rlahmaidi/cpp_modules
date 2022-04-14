#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
{
    std::cout << "PresidentialPardonForm default constructor called " << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(std::string const &target): Form("PresidentialPardonForm",25, 5, target)
{
    std::cout << "PresidentialPardonForm parametrized constructor called " << std::endl;

}
PresidentialPardonForm::~PresidentialPardonForm(void)
{
        std::cout << "PresidentialPardonForm default destructor called " << std::endl;

}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& sh)
{
    *this = sh;
}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& sh)
{
    Form::operator=(sh);
	return(*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executer) const
{
    if (getSign() == true  && getExcuteGrade() >= executer.getGrade())
        std::cout << getTarget() << "has been pardoned by y Zaphod Beeblebrox"  << std::endl;
    else
        throw Form::GradeTooLowException();
}