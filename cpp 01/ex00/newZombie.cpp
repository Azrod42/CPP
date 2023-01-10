#include"Zombie.hpp"

Zombie* newZombie(std::string name )
{
	Zombie *nw;

	nw = new Zombie(name);
	return (nw);
}