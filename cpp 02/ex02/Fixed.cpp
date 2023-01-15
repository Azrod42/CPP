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
}

Fixed::Fixed(const Fixed &copy) {
	*this = copy;
}

Fixed::Fixed(const float fl) : _nbr((fl * get_float(_val)) + 0.5){
}

Fixed::Fixed(const int nb) : _nbr((nb * get_float(_val))) {
}

Fixed::~Fixed(void) {
}

Fixed	&Fixed::operator=(const Fixed &copy) {
	this->_nbr = copy.getRawBits();
	return(*this);
}

int		Fixed::getRawBits(void) const{
	return (this->_nbr);
}

void	Fixed::setRawBits(const int raw)
{
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

Fixed	Fixed::operator+(Fixed const &copy) const{
	Fixed	newF(this->toFloat() + copy.toFloat());
	return newF;
}

Fixed	Fixed::operator-(Fixed const &copy) const{
	Fixed	newF(this->toFloat() - copy.toFloat());
	return newF;
}

Fixed	Fixed::operator*(Fixed const &copy) const{
	Fixed	newF(this->toFloat() * copy.toFloat());
	return newF;
}

Fixed	Fixed::operator/(Fixed const &copy) const{
	Fixed	newF(this->toFloat() / copy.toFloat());
	return newF;
}

bool	Fixed::operator==(Fixed const &copy) const{
	if (this->toFloat() == copy.toFloat())
		return (1);
	return (0);
}

bool	Fixed::operator!=(Fixed const &copy) const{
	if (this->toFloat() != copy.toFloat())
		return (1);
	return (0);
}

bool	Fixed::operator>=(Fixed const &copy) const{
	if (this->toFloat() >= copy.toFloat())
		return (1);
	return (0);
}

bool	Fixed::operator<=(Fixed const &copy) const{
	if (this->toFloat() <= copy.toFloat())
		return (1);
	return (0);
}

bool	Fixed::operator>(Fixed const &copy) const{
	if (this->toFloat() > copy.toFloat())
		return (1);
	return (0);
}

bool	Fixed::operator<(Fixed const &copy) const{
	if (this->toFloat() < copy.toFloat())
		return (1);
	return (0);
}

Fixed	&Fixed::operator++(void){
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed	&Fixed::operator--(void){
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed	Fixed::operator++(int nbr){
	Fixed ret(*this);
	
	if (!nbr)
		nbr = 1;
	this->setRawBits(this->getRawBits() + nbr);
	return (ret);
}

Fixed	Fixed::operator--(int nbr){
	Fixed ret(*this);
	
	if (!nbr)
		nbr = 1;
	this->setRawBits(this->getRawBits() - nbr);
	return (ret);
}

const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2) {
	if (f1.getRawBits() < f2.getRawBits())
		return(f1);
	return (f2);
}

const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2) {
	if (f1.getRawBits() > f2.getRawBits())
		return(f1);
	return (f2);
}