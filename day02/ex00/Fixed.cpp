#include "Fixed.hpp"

Fixed::Fixed(void):fixed_point(0)
{
	std::cout << "default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "copy  constructor called" << std::endl;
	fixed_point = other.getRawBits();
}

Fixed Fixed:: operator = (const Fixed& other)
{
	std::cout <<"copy assignement opertor called" << std::endl;
	fixed_point = other.getRawBits();
	return(*this);
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(fixed_point);
}
void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	fixed_point = raw;
}

Fixed::~Fixed()
{
	std::cout << "deconstructor called" << std::endl;
}