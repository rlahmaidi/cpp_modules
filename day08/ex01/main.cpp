#include "Span.hpp"

int main()
{
    std::vector<int> v;

    v.push_back(101);
    v.push_back(101);
    v.push_back(101);
    v.push_back(101);
    v.push_back(101);
    v.push_back(101);
    v.push_back(101);
    v.push_back(101);
    v.push_back(101);


    Span sp = Span(12);

    try
    {    
        sp.addNumber(6);
        sp.addNumber(17);
        sp.addNumber(3);
        sp.addNumber(11);
        sp.addNumber(9);
        sp.addNumber(3);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        sp.addNumber(v.begin(), v.end());
    }
    catch(const char *e)
    {
        std::cerr << e << '\n';
    }
    return 0;
}