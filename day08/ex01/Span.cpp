#include "Span.hpp"


Span::Span()
{
    N = 0;
    size = 0;
}
Span::Span(unsigned int n)
{
    N = n;
    size = 0;
}
Span::Span(const Span & c)
{
    *this = c;
}
Span::~Span()
{
    
}
Span & Span::operator=(const Span & c)
{
    N = c.N;
    arr = c.arr;
    return(*this);
}
void Span::addNumber(int c)
{
    if(arr.size() >= N)
        throw "your table is already filled ";
    arr.push_back(c);
}

void Span::addNumber(std::vector<int>::iterator a, std::vector<int>::iterator b)
{
    int e = std::distance(a, b);
    if (e + arr.size() >= N)
      throw "your table is already filled ";
    arr.insert(arr.end(), a, b);
}

int  Span::longestSpan()
{
    int  i = 0;
    if (arr.size() <= 1)
        throw "few elements impossible span";
    std::sort(arr.begin(), arr.end());
    i = arr[arr.size()] - arr[0];
    return i;

}
int  Span::shortestSpan()
{
    int diff ;
    if (arr.size() <= 1)
        throw "few elements impossible span";
    std::sort(arr.begin(), arr.end());
    diff = arr[0];
    std::vector<int>::iterator it;
    for(it = arr.begin() + 1; it != arr.end(); it++)
    {
        if(diff > *it - *(it - 1))
        diff = *it - *(it - 1);
    }
    return(diff);
}