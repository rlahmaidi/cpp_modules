#include <iostream>

class Fixed
{
	private:
			int	fixed_point;
			static const int number_of_fractional_bits = 8;
	public:
			//Fixed(); 
			Fixed(void);
			Fixed(const Fixed& other);		//copy constructor
			Fixed operator=(const Fixed& rhs);//copy assignement operators
			~Fixed();
			int getRawBits( void ) const;
			void setRawBits( int const raw );
};