#include"HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& wpnd) {
	this->_name = name;
	this->_wpnd = &wpnd;
	std::cout << "Constructeur called" << std::endl;
}

HumanA::~HumanA(void) {
	std::cout << "Destructeur called" << std::endl;
}

void	HumanA::attack(void) const{
	std::cout << this->_name << " attacks with their " << this->_wpnd->getType()
		<< std::endl;
}