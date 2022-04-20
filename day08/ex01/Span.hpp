#include <iostream>
#include <vector>

class Span
{
    private:
    std::vector<int> arr;
    unsigned int N;
    int size;
    public:
            Span();
            Span(unsigned int n);
            Span(const Span &);
            ~Span();
            Span & operator=(const Span &);
            void addNumber(std::vector<int>::iterator a, std::vector<int>::iterator b);
            void addNumber(int c);
            int longestSpan();
            int shortestSpan();
};