#include"Fixed.hpp"

int	main(void){
	Fixed a;
	Fixed b( a );
	Fixed c;
	c = b;

	a.setRawBits(5);
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	b.setRawBits(6);
	c.setRawBits(7);
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}