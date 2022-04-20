
#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack(): std::stack<T>() {};
        MutantStack(MutantStack const &obj) { *this = obj; };
        ~MutantStack() {};
        MutantStack &operator=(MutantStack const &rhs)
        {
            if (this != &rhs) 
            {
                this->c = rhs.c;
            }
                return *this;
        };
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin() 
        {
            return this->c.begin();
        }
        iterator end()
        {
            return this->c.end();
        }
        bool empty() 
        {
            return this->c.empty();
        }
        size_t size()
        {
            return this->c.size();
        }
        void push(const T& val)
        {
             this->c.push_back(val); 
        }
        void pop()
        {
            return this->c.pop_back();
        }
};
