#include"Zombie.hpp"

Zombie* newZombie( std::string name );

void randomChump( std::string name );

int	main(void){
	Zombie *zb;

	zb = newZombie("Tom");
	zb->announce();
	randomChump("Didier");
	randomChump("Francis");
	randomChump("Marcel");
	randomChump("Abou");
	zb->~Zombie();
	return (0);
}
