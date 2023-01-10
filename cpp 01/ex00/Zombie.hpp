#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# ifndef IOSTREAM
#  define IOSTREAM
#  include<iostream>
# endif

class Zombie {
	public :
		Zombie(std::string);
		~Zombie(void);

	void	announce(void) const;

	private:
	std::string	_name;
};

#endif