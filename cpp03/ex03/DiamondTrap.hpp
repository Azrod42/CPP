#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# ifndef IOSTREAM
#  define IOSTREAM
#  include<iostream>
# endif
#include"FragTrap.hpp"
#include"ScavTrap.hpp"

class  DiamondTrap : public FragTrap, public ScavTrap{
	public:
		DiamondTrap(std::string name);
		~DiamondTrap(void);
		DiamondTrap(const DiamondTrap &copy);
		DiamondTrap &operator=(const DiamondTrap &copy);
		void whoAmI();
	private:
		DiamondTrap(void);
		std::string _name;
};

#endif