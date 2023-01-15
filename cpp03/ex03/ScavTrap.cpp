#include"ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("Scavi") {
	this->_dammage = 0;
	this->_heal = 10;
	this->_mana = 10;
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->_heal = 100;
	this->_mana = 50;
	this->_dammage = 20;
	this->_name = name;
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy){
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = copy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy){
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	this->_heal = copy._heal;
	this->_mana = copy._mana;
	this->_dammage = copy._dammage;
	this->_name = copy._name;
	return (*this);
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->_name << " enter on Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target){
	if (this->_heal < 1)
		std::cout << "ScavTrap " <<  this->_name << " is dead." << std::endl;
	else if (this->_mana > 0){
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_dammage << " points of damage!" << std::endl;
		this->_mana -= 1;
	}
	else
		std::cout << "ScavTrap " << this->_name << " does not have enough mana" << std::endl;
}
