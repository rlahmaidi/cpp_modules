#ifndef FORM
#define FORM
# include "Bureaucrat.hpp"
//# include <iostream>

//class Bureaucrat;

class Form
{
    private:
            const std::string name;
            bool sign;
            const int signGrade;
            const int excuteGrade;
            //ex02
            std::string target;
    public:
            Form(void);
            virtual ~Form(void);
            Form(const Form& F);
            Form& operator=(const Form& F);
            Form(const std::string _name, const int _signGrade, const int _excuteGrade, std::string _target);
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

            /**********seters and geters*********/
            std::string getName(void) const;
            bool         getSign(void) const;
            int         getSignGrade(void) const;
            int         getExcuteGrade(void) const;
            void         setSign(bool    _sign);
            //ex02
            std::string        getTarget(void) const;
            void          setTarget(std::string _target);
            /**********end of seters and geters******/

            bool    beSigned(Bureaucrat& B);
            virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream & operator<<( std::ostream & o, Form const & rhs);


#endif