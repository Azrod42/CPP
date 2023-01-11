#include"Weapon.hpp"

Weapon::Weapon(std::string name) {
	this->_type = name;
	std::cout << "Constructeur called" << std::endl;
}

Weapon::~Weapon(void) {
	std::cout << "Destructeur called" << std::endl;
}

const std::string& Weapon::getType(void){
	return (this->_type);
}

void Weapon::setType(std::string str) {
	this->_type = str;
}