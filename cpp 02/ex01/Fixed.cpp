#include"Fixed.hpp"

float get_float(int nbr)
{
	float	ret;
	float	base;

	base = 2;
	if (!nbr)
		return (1);
	if (nbr < 0)
	{
		base = 1 / base;
		nbr *= -1;
	}
	ret = base;
	while (--nbr)
		ret *= base;
	return (ret);
}

Fixed::Fixed(void) : _nbr(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(const float fl) : _nbr((fl * get_float(_val)) + 0.5){
	std::cout << "float constructor called" << std::endl;
}

Fixed::Fixed(const int nb) : _nbr(nb * get_float(_val)) {
	std::cout << "int constructor called" << std::endl;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &copy) {
	std::cout << "Copy assignment operator called" <<std::endl;
	this->_nbr = copy.getRawBits();
	return(*this);
}

int		Fixed::getRawBits(void) const{
	return (this->_nbr);
}

void	Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_nbr = raw;
}

int		Fixed::toInt(void) const {
		int ret;
		
		ret = (int)(this->_nbr * get_float(-_val));
		return (ret);
}

float	Fixed::toFloat(void) const {
		float ret;

		ret = (float)this->_nbr * get_float(-_val);
		return (ret);
}

std::ostream &operator<<(std::ostream &ope, const Fixed &copy){
	ope << copy.toFloat();
	return(ope);
}

