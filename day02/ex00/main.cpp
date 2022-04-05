// #include "Fixed.hpp"

// int main()
// {
// 	Fixed obj1;
// 	Fixed obj2(obj1);

// return(0);
// }

#include "Fixed.hpp"
int main( void ) {
Fixed a; //default constructor called
Fixed b( a ); // copy constructor called // get called
Fixed c; //deafult constructor called;
c = b; // copy assignement operator called // get called
std::cout << a.getRawBits() << std::endl;
std::cout << b.getRawBits() << std::endl;
std::cout << c.getRawBits() << std::endl;
return 0;
}