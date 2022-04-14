#ifndef PRESIDENTIALPARDONFORM
#define PRESIDENTIALPARDONFORM

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    public:
            PresidentialPardonForm(void);
            PresidentialPardonForm(std::string const &target);
            virtual ~PresidentialPardonForm(void);
            PresidentialPardonForm(const PresidentialPardonForm& sh);
            PresidentialPardonForm& operator=(const PresidentialPardonForm& sh);
            void execute(Bureaucrat const & executor) const  ;
};

#endif