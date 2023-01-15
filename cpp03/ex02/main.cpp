#include"ClapTrap.hpp"
#include"ScavTrap.hpp"
#include"FragTrap.hpp"

int	main(void){
	ClapTrap player("Denis");
	ScavTrap scav("Marcel");
	FragTrap frag("Michel");

	scav.guardGate();
	frag.highFivesGuys();
	frag.attack("Kevin");
	scav.attack("Kevin");
	player.attack("Kevin");
	frag.status();
	scav.status();
	player.status();
	return (0);
}