#include "Form.hpp"
#include <fstream>
class ShrubberyCreationForm : public virtual Form
{
    public:
            ShrubberyCreationForm(void);
            ShrubberyCreationForm(std::string const &target);
            virtual ~ShrubberyCreationForm(void);
            ShrubberyCreationForm(const ShrubberyCreationForm& sh);
            ShrubberyCreationForm& operator=(const ShrubberyCreationForm& sh);
            void execute(Bureaucrat const & executor) const  ;
};
