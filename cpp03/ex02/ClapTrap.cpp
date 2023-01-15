 #include"ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) {
	this->_dammage = 0;
	this->_heal = 10;
	this->_mana = 10;
	this->_name = name;
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy) {
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	this->_dammage = copy._dammage;
	this->_heal = copy._heal;
	this->_mana = copy._mana;
	this->_name = copy._name;
	return (*this);
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target){
	if (this->_heal < 1)
		std::cout << "ClapTrap " <<  this->_name << " is dead." << std::endl;
	else if (this->_mana > 0){
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_dammage << " points of damage!" << std::endl;
		this->_mana -= 1;
	}
	else
		std::cout << "ClapTap " << this->_name << " does not have enough mana" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (this->_heal > 1) {
		this->_heal -= amount;
		if (this->_heal < 0)
			this->_heal = 0;
		std::cout << "ClapTrap " << this->_name << " took " << amount << " points of damage!" << std::endl;
	}
	if (this->_heal <= 0){
		std::cout << "ClapTrap " <<  this->_name << " is dead." << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " now have " <<  this->_heal << "HP." << std::endl;

}

void ClapTrap::status(void) const{
	std::cout << "-----------------" << std::endl;
	std::cout << "name   : " << this->_name << std::endl;
	std::cout << "Heal   : " << this->_heal << std::endl;
	std::cout << "Mana   : " << this->_mana << std::endl;
	std::cout << "Attack : " << this->_dammage << std::endl;
	std::cout << "-----------------" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (this->_heal > 0 && this->_mana > 0){
		this->_heal += amount;
		this->_mana -= 1;
		std::cout << "ClapTrap " << this->_name << " be repaired and now have " << this->_heal << " HP" << std::endl;
	}
	else if (this->_mana < 1 && this->_heal > 0) 
		std::cout << "ClapTrap " << this->_name << " does not have enough mana" << std::endl;
	else
		std::cout << "ClapTrap " <<  this->_name << " is dead." << std::endl;

}