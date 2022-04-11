#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
    public:
            ShrubberyCreationForm(void);
            ShrubberyCreationForm(std::string const &target);
            ~ShrubberyCreationForm(void);
            ShrubberyCreationForm(const ShrubberyCreationForm& sh);
            ShrubberyCreationForm& operator=(const ShrubberyCreationForm& sh);
            void execute(Bureaucrat const & executor) const  ;
};
