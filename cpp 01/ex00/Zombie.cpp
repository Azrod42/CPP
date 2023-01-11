#include"Zombie.hpp"

Zombie::Zombie(std::string name) {
	this->_name = name;
	std::cout << "Constructeur " << this->_name << " called" << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << "Destructeur " << this->_name << " called" << std::endl;
}

void Zombie::announce(void) const{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}