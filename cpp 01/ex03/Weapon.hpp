#ifndef	WEAPON_HPP
# define WEAPON_HPP

# ifndef IOSTREAM
#  define IOSTREAM
#  include<iostream>
# endif

class Weapon {
	public :
		Weapon(std::string);
		~Weapon(void);

	const std::string& getType(void);
	void setType(std::string str);

	private:
	std::string	_type;
};

#endif