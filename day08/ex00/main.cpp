#include "easyfind.hpp"

int main()
{
    std::vector<int> a(10, 69);
    std::queue<int> q;
    q.push(69);
    q.push(15);
    q.push(1);
    try
    {
    int e = easyfind(a, 69);
    std::cout << e << std::endl;
   } catch (const char *c){
        std::cout << c << std::endl;
    }

    try
    {
        int e = easyfind(q, 15);
        std::cout << e << std::endl;
   } catch (const char *c){
        std::cout << c << std::endl;
    }
}