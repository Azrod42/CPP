#ifndef	HARL_HPP
# define HARL_HPP

# ifndef IOSTREAM
#  define IOSTREAM
#  include<iostream>
# endif

class Harl {
	public :
		Harl(void);
		~Harl(void);

	void	complain(std::string level);
	int		HarlFilter(std::string level);

	private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	int	_start;
};

#endif