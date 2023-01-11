#include"HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->_name = name;
	std::cout << "Constructeur called" << std::endl;
}

HumanB::~HumanB(void) {
	std::cout << "Destructeur called" << std::endl;
}

void	HumanB::attack(void) const{
	std::cout << this->_name << " attacks with their " << this->_wpnd->getType()
		<< std::endl;
}

void	HumanB::setWeapon(Weapon& wpnd) {
	this->_wpnd = &wpnd;
}