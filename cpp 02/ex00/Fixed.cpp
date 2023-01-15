#include"Fixed.hpp"

Fixed::Fixed(void) {
	this->_nbr = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &copy) {
	std::cout << "Copy assignment operator called" <<std::endl;
	this->_nbr = copy.getRawBits();
	return(*this);
}

Fixed::Fixed(const Fixed &copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

int		Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_nbr);
}

void	Fixed::setRawBits(const int raw)
{
	this->_nbr = raw;
}