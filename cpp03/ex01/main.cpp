#include"ClapTrap.hpp"
#include"ScavTrap.hpp"

int	main(void){
	ClapTrap player("Denis");
	ScavTrap scav("Marcel");

	scav.guardGate();
	scav.attack("Kevin");
	player.attack("Kevin");
	scav.takeDamage(7);
	scav.beRepaired(5);
	scav.status();
	player.status();
	scav.takeDamage(100);
	player.takeDamage(299);
	scav.status();
	player.status();
	return (0);
}