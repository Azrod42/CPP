#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# ifndef IOSTREAM
#  define IOSTREAM
#  include<iostream>
# endif
#include"ClapTrap.hpp"

class  ScavTrap : virtual public ClapTrap {
	public:
		ScavTrap(std::string name);
		~ScavTrap(void);
		ScavTrap(const ScavTrap &copy);
		ScavTrap &operator=(const ScavTrap &copy);
		void guardGate();
		void attack(const std::string& target);
};

#endif