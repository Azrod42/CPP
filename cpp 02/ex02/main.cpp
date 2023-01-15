#include"Fixed.hpp"
int main( void ) {
	Fixed a;
	Fixed b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << "----------------" << std::endl;
	std::cout << "Subject test" << std::endl;
	std::cout << "----------------" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << "----------------" << std::endl;
	std::cout <<  std::endl;
	Fixed c(5);
	Fixed d(5);
	std::cout << "c = " << c << " d = " << d << std::endl;
	if (c == d)
		std::cout << c << " == " << d << std::endl;
	c.setRawBits(10752);
	std::cout << "c = " <<  c << std::endl;
	if (c != d)
		std::cout << c << " != " << d << std::endl;
	if (c > d)
		std::cout << c << " > " << d << std::endl;
	if (d < c)
		std::cout << d << " < " << c << std::endl;
	std::cout << "----------------" << std::endl;
	c.setRawBits(10752);
	d.setRawBits(10752);
	std::cout << "c.setRawBits(42 * (2^8));" << c << std::endl;
	std::cout << "d.setRawBits(42 * (2^8));" << d << std::endl;
	std::cout << "c = " << c << " d = " << d << std::endl;
	if (d == c)
		std::cout << d << " == " << c << std::endl;
	if (d <= c)
		std::cout << d << " <= " << c << std::endl;
	if (d >= c)
		std::cout << d << " >= " << c << std::endl;
	std::cout << "c + d = " << c + d << std::endl;
	std::cout << "c - d = " << c - d << std::endl;
	std::cout << "c / d = " << c / d << std::endl;
	std::cout << "c * d = " << c * d << std::endl;
	std::cout << "----------------" << std::endl;
	c.setRawBits(10752);
	d.setRawBits(1752);
	std::cout << "c = " << c << " d = " << d << std::endl;
	std::cout << "max =" << Fixed::max(c, d) << std::endl;
	std::cout << "min =" << Fixed::min(c, d) << std::endl;

	return 0;
}