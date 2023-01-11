#ifndef HUMANA_HPP
# define HUMANA_HPP

# ifndef IOSTREAM
#  define IOSTREAM
#  include<iostream>
# endif
# include"Weapon.hpp"

class HumanA {
	public :
		HumanA(std::string name, Weapon& wpnd);
		~HumanA(void);
		void	attack(void) const;


	private:
	std::string	_name;
	Weapon *_wpnd;
};

#endif