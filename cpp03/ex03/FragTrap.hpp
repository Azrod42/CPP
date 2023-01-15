#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# ifndef IOSTREAM
#  define IOSTREAM
#  include<iostream>
# endif
#include"ClapTrap.hpp"

class  FragTrap : virtual public ClapTrap {
	public:
		FragTrap(void);
		FragTrap(std::string name);
		~FragTrap(void);
		FragTrap(const FragTrap &copy);
		FragTrap &operator=(const FragTrap &copy);
		void highFivesGuys(void);
};

#endif