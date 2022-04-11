#ifndef FORM
#define FORM
//# include "Bureaucrat.hpp"
# include <iostream>

class Bureaucrat;

class Form
{
    private:
            const std::string name;
            bool sign;
            const int signGrade;
            const int excuteGrade;
    public:
            Form(void);
            ~Form(void);
            Form(const Form& F);
            Form& operator=(const Form& F);
            Form(const std::string _name, const int _grade, const int _excute);
            class GradeTooHighException : public std::exception
            {
                public:
                    // GradeTooHighException() throw();
                    // ~GradeTooHighException() throw();
                    const char* what() const throw();
            };
            class GradeTooLowException : public std::exception
            {
                public:
                    // GradeTooLowException() throw();
                    // ~GradeTooLowException() throw();
                    const char* what() const throw();
            };

            /**********seters and geters*********/
            std::string getName(void) const;
            bool              getSign(void) const;
            int         getSignGrade(void) const;
            int         getExcuteGrade(void) const;
               
            void              setSign(bool    _sign);
            /**********end of seters and geters******/

            bool    beSigned(Bureaucrat& B);
};

std::ostream & operator<<( std::ostream & o, Form const & rhs);

#endif