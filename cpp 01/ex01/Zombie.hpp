#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# ifndef IOSTREAM
#  define IOSTREAM
#  include<iostream>
# endif

class Zombie {
	public :
		Zombie(void);
		~Zombie(void);

	void	announce(void) const;
	void	setName(std::string name);

	private:
	std::string	_name;
};

#endif