

#include <iostream>

template <class mytype>
void    swap(mytype& a, mytype& b)
{
    mytype c;

    c = a;
    a = b;
    b = c;
}

template <class mytype>
mytype min(mytype &a, mytype &b)
{
    if(a < b)
        return(a);
    else
        return(b);
}

template <class mytype>
mytype max(mytype &a, mytype &b)
{
    if(a > b)
        return(a);
    else
        return(b);
}
