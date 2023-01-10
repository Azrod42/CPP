#include"Zombie.hpp"

Zombie* newZombie( std::string name );

void randomChump( std::string name );

int	main(void){
	Zombie *lez;

	lez = newZombie("Tom");
	lez->announce();
	lez->~Zombie();
	return (0);
}
