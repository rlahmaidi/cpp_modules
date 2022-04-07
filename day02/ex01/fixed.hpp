#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	private:
			int	fixed_point;
			static const int number_of_fractional_bits = 8;
	public:
			Fixed(void);
			Fixed(const Fixed& other);
			Fixed operator=(const Fixed& rhs);
			~Fixed();
			int getRawBits( void ) const;
			void setRawBits( int const raw );

			//ex01 functions;
			Fixed(int const number);
			Fixed(float const number);
			float toFloat( void ) const;
			int toInt( void ) const;
			
};

std::ostream	&operator << (std::ostream& file, Fixed const &c);