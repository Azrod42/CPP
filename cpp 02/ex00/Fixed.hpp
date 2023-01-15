#ifndef FIXED_HPP
# define FIXED_HPP

# ifndef IOSTREAM
#  define IOSTREAM
#  include<iostream>
# endif

class Fixed {
	public :
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed &copy);
		Fixed &operator=(const Fixed &copy);

		int getRawBits(void) const;
		void setRawBits(int const raw);
		
	private :
		int _nbr;
		static const int _val; 
};

#endif