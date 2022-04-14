#ifndef ROBOTOMYREQUESTFORM
#define ROBOTOMYREQUESTFORM

#include "Form.hpp"

class RobotomyRequestForm : public virtual Form
{
    public:
            RobotomyRequestForm(void);
            RobotomyRequestForm(std::string const &target);
            virtual ~RobotomyRequestForm(void);
            RobotomyRequestForm(const RobotomyRequestForm& sh);
            RobotomyRequestForm& operator=(const RobotomyRequestForm& sh);
            void execute(Bureaucrat const & executor) const  ;
};

#endif