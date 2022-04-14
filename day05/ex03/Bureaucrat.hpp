#ifndef BUREAUCRAT
#define BUREAUCRAT

#include <iostream>
#include <string>
//#include "Form.hpp"

class Form;
class Bureaucrat
{
    private:
        const std::string name;
        int               grade;
    public:
            Bureaucrat(void);
            ~Bureaucrat(void);
            Bureaucrat(std::string _name, int _grade);
            Bureaucrat(const Bureaucrat& B);
            Bureaucrat& operator=(const Bureaucrat& B);
            int getGrade(void) const;
            void setGrade(int _grade);
            const std::string  getName(void) const;
            void        increment(void);
            void        decrement (void);
            class GradeTooHighException : public std::exception
            {
                public:
                    GradeTooHighException() throw();
                    ~GradeTooHighException() throw();
                    const char* what() const throw();
            };
            class GradeTooLowException : public std::exception
            {
                public:
                    GradeTooLowException() throw();
                    ~GradeTooLowException() throw();
                    const char* what() const throw();
            };

            void	signForm( Form & form );
            //ex02
            void executeForm(Form const & form);
};

std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs);


#endif