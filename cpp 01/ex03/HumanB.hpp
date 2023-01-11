#ifndef HUMANB_HPP
# define HUMANB_HPP

# ifndef IOSTREAM
#  define IOSTREAM
#  include<iostream>
# endif
# include"Weapon.hpp"

class HumanB {
	public :
		HumanB(std::string name);
		~HumanB(void);
		void	attack(void) const;
		void	setWeapon(Weapon& wpnd);


	private:
	std::string	_name;
	Weapon *_wpnd;
};

#endif