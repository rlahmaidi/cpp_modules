#include <iostream>

class Fixed
{
	private:
			int	fixed_point;
			static const int number_of_fractional_bits = 8;
	public:
			Fixed(void);
			Fixed(const Fixed& other);		//copy constructor
			Fixed operator=(const Fixed& rhs);//copy assignement operators
			~Fixed();
			int getRawBits( void ) const;
			void setRawBits( int const raw );

			//ex01 functions;
			Fixed(int const number);
			Fixed(float const number);
			float toFloat( void ) const;
			int toInt( void ) const;
			//returnType operator symbol (arguments);
};

std::ostream	&operator << (std::ostream& file, Fixed const &c);