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
			Fixed &operator=(const Fixed& rhs);
			~Fixed();
			int getRawBits( void ) const;
			void setRawBits( int const raw );

			//ex01 functions;
			Fixed(int const number);
			Fixed(float const number);
			float toFloat( void ) const;
			int toInt( void ) const;
		/********** comparaison operators ****************************/

		bool operator==(Fixed const &f);
		bool operator>(Fixed const &f);
		bool operator<(Fixed const &f);
		bool operator<=(Fixed const &f);
		bool operator>=(Fixed const &f);
		bool operator!=(Fixed const &f);
		/********** Arethmetic operators ****************************/
		Fixed operator+(Fixed const &f);
		Fixed operator-(Fixed const &f);
		Fixed operator*(Fixed const &f);
		Fixed operator/(Fixed const &f);
		/********** inc/dec rement operators ****************************/
		Fixed &operator++();
		Fixed &operator--();
		Fixed operator++(int);
		Fixed operator--(int);
		/***************** static function ****************************/
		static Fixed &min(Fixed &a, Fixed& b);
		static Fixed &max(Fixed &a, Fixed& b);
		static Fixed const &min(Fixed const &a, Fixed const &b);
		static Fixed const &max(Fixed const &a, Fixed const &b);
};

std::ostream	&operator << (std::ostream& file, Fixed const &c);