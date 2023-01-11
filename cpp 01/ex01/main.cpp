#include"Zombie.hpp"

Zombie* zombieHorde( int N, std::string name);

int	main(void){
	Zombie *hord;

	hord = zombieHorde(7, "Didier");
	for (int i = 0; i < 7; i++)
		hord[i].announce();
	delete[] hord;
	return (0);
}
