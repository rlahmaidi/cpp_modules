#include "fixed.hpp"

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
	std::cout << "destructor called" << std::endl;
}

//ex01 functions 
Fixed::Fixed(int const number)
{
	fixed_point = number << number_of_fractional_bits;
}

Fixed::Fixed(float const number)
{
	fixed_point = roundf(number * (1 << number_of_fractional_bits));
}

float	Fixed::toFloat( void ) const
{
		return (float)fixed_point / (float)( 1 << number_of_fractional_bits);
}

int	Fixed::toInt( void ) const
{
	return fixed_point >> number_of_fractional_bits;
}
std::ostream	&operator << (std::ostream& file, Fixed const &c)
{
	file << c.toFloat();
	return file;
}
