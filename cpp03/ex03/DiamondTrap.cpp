#include"DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap(){
	std::cout << "DiamondTrap constructor called" << std::endl;
}
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"){
	this->_heal = 100;
	this->_mana = 50;
	this->_dammage = 20;
	this->_name = name;
	std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy), FragTrap(copy), ScavTrap(copy){
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = copy;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy){
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	this->_heal = copy._heal;
	this->_mana = copy._mana;
	this->_dammage = copy._dammage;
	this->_name = copy._name;
	return (*this);
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void	DiamondTrap::whoAmI() {
	std::cout << "Who am I ? " << this->_name << std::endl;
}
