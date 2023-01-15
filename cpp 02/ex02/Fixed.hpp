#ifndef FIXED_HPP
# define FIXED_HPP

# ifndef IOSTREAM
#  define IOSTREAM
#  include<iostream>
# endif
# ifndef CMATH
#  define CMATH
#  include<cmath>
# endif


class Fixed {
	public :
		Fixed(void);
		Fixed(const Fixed &copy);
		Fixed(const int nb);
		Fixed(const float fl);
		~Fixed(void);

		bool operator<(const Fixed &copy) const;
		bool operator>(const Fixed &copy) const;
		bool operator<=(const Fixed &copy) const;
		bool operator>=(const Fixed &copy) const;
		bool operator==(const Fixed &copy) const;
		bool operator!=(const Fixed &copy) const;
		Fixed &operator=(const Fixed &copy);
		Fixed operator+(const Fixed &copy) const;
		Fixed operator-(const Fixed &copy) const;
		Fixed operator*(const Fixed &copy) const;
		Fixed operator/(const Fixed &copy) const;
		Fixed &operator++(void);
		Fixed &operator--(void);
		Fixed operator++(int nbr);
		Fixed operator--(int nbr);
		
		static const Fixed &min(const Fixed &f1, const Fixed &f2);
		static const Fixed &max(const Fixed &f1, const Fixed &f2);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt( void ) const;
		
	private :
		int _nbr;
		static const int _val = 8; 
};

std::ostream &operator<<(std::ostream &ope, const Fixed &copy);

#endif