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

		Fixed &operator=(const Fixed &copy);

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