#include <iostream>
#include <vector>
#include <stack>
#include <queue>

int easyfind(std::priority_queue<int> a, int n)
{
    int q = 0;
    //std::cout << a.top() << std::endl;
    while (!a.empty())
    {
        if (a.top() == n)
            return q;
        a.pop();
        q++;
    }
    throw "element not found";
    return (0);
}
int easyfind(std::queue<int> a, int n)
{
    int q = 0;
    //std::cout << a.front() << std::endl;
    while (!a.empty())
    {
        if (a.front() == n)
            return q;
        a.pop();
        q++;
    }
    throw "element not found";
    return (0);
}
int easyfind(std::stack<int> a, int n)
{
    int q = 0;
    while (!a.empty())
    {
        if (a.top() == n)
            return q;
        a.pop();
        q++;
    }
    throw "element not found";
    return (0);
}

template <class mytype>
int easyfind(mytype a,int n)
{
    typename mytype::iterator e = std::find(a.begin(), a.end(), n);
    //std::vector<int> a(10, 8);
    int q = std::distance(a.begin(), e);
    if (e != a.end())
        return q;
        //std::cout << *e << std::endl;
    else
        throw  "element not found";
    return (0);
}