#include <iostream>
#include <string>

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
};