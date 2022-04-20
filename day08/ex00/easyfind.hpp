#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>

int easyfind(std::priority_queue<int> a, int n)
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
int easyfind(std::queue<int> a, int n)
{
    int q = 0;
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
    int q = std::distance(a.begin(), e);
    if (e != a.end())
        return q;
    else
        throw  "element not found";
    return (0);
}