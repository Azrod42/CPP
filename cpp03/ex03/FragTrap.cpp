#include"FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("Fragi") {
	this->_dammage = 0;
	this->_heal = 10;
	this->_mana = 10;
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->_heal = 100;
	this->_mana = 100;
	this->_dammage = 30;
	this->_name = name;
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy){
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = copy;
}

FragTrap &FragTrap::operator=(const FragTrap &copy){
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	this->_heal = copy._heal;
	this->_mana = copy._mana;
	this->_dammage = copy._dammage;
	this->_name = copy._name;
	return (*this);
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << this->_name << "  high fives !" << std::endl;
}
