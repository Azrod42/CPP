#include"ClapTrap.hpp"

int	main(void){
	ClapTrap player("Denis");

	player.status();
	player.attack("Kevin");
	player.takeDamage(5);
	player.status();
	player.beRepaired(4);
	player.beRepaired(5);
	player.status();
	for (int i = 0; i < 7; i++)
		player.attack("Kevin");
	player.status();
	player.attack("Kevin");
	player.attack("Kevin");
	player.attack("Kevin");
	player.takeDamage(5);
	player.status();
	ClapTrap player2(player);
	player.takeDamage(5);
	player.takeDamage(5);
	player.attack("Kevin");
	player.beRepaired(5);
	player2.status();
	return 0;
}