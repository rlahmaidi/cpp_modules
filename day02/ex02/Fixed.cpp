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

Fixed &Fixed::operator=(const Fixed& other)
{
	std::cout <<"copy assignement opertor called" << std::endl;
	this->fixed_point = other.getRawBits();
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
	fixed_point = number * (1 << number_of_fractional_bits);
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

//ex02
/********** comparaison operators ****************************/
		
		bool	Fixed::operator==(Fixed const &f)
		{
			if(this->fixed_point == f.fixed_point)
				return(true);
			else 
				return(false);
		}
		bool	Fixed::operator>(Fixed const &f)
		{
			if(this->fixed_point > f.fixed_point)
				return(true);
			else 
				return(false);
		}
		bool	Fixed::operator<(Fixed const &f)
		{
			if(this->fixed_point < f.fixed_point)
				return(true);
			else 
				return(false);
		}
		bool	Fixed::operator<=(Fixed const &f)
		{
			if(this->fixed_point <= f.fixed_point)
				return(true);
			else 
				return(false);
		}
		bool	Fixed::operator>=(Fixed const &f)
		{
			if(this->fixed_point >= f.fixed_point)
				return(true);
			else 
				return(false);
		}
		bool	Fixed::operator!=(Fixed const &f)
		{
			if(this->fixed_point != f.fixed_point)
				return(true);
			else 
				return(false);
		}
		/********** Arethmetic operators ****************************/
		Fixed Fixed::operator+(Fixed const &f)
		{
			return(this->toFloat() + f.toFloat());
		}
		Fixed Fixed::operator-(Fixed const &f)
		{
			return(this->toFloat() - f.toFloat());
		}
		Fixed Fixed::operator*(Fixed const &f)
		{
			return(this->toFloat() * f.toFloat());
		}
		Fixed Fixed::operator/(Fixed const &f)
		{
			return(this->toFloat() / f.toFloat());
		}
		/********** inc/dec rement operators ****************************/
		Fixed &Fixed::operator++()
		{
			(this->fixed_point)++;
			return(*this);
		}

		Fixed &Fixed::operator--()
		{
			this->fixed_point--;
			return(*this);
		}

		Fixed Fixed::operator++(int)
		{
			Fixed a = *this;

			++(this->fixed_point);
			return(a);
		}

		Fixed Fixed::operator--(int)
		{
			Fixed a(*this);

			--(this->fixed_point);//we may use --(*this);
			return(a);
		}
		/***************** static function ****************************/
		 Fixed &Fixed::min(Fixed &a, Fixed& b)
		{
			if(a.fixed_point < b.fixed_point)
				return(a);
			else
				return(b);
		}
		 Fixed &Fixed::max(Fixed &a, Fixed& b)
		{
			if(a.fixed_point > b.fixed_point)
				return(a);
			else
				return(b);
		}
		 Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
		{
			if(a.fixed_point < b.fixed_point)
				return(a);
			else
				return(b);
		}
		 Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
		{
			if(a.fixed_point > b.fixed_point)
				return(a);
			else
				return(b);
		}
		
