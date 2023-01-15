#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# ifndef IOSTREAM
#  define IOSTREAM
#  include<iostream>
# endif

class  ClapTrap {
	public:
		ClapTrap(std::string name);
		~ClapTrap(void);
		ClapTrap(const ClapTrap &copy);
		ClapTrap &operator=(const ClapTrap &copy);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void status(void) const;

	protected:
	std::string	_name;
	int			_heal;
	int 		_mana;
	int 		_dammage;
};

#endif