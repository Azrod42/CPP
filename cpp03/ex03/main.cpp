#include"ClapTrap.hpp"
#include"ScavTrap.hpp"
#include"FragTrap.hpp"
#include"DiamondTrap.hpp"

int	main(void){
	DiamondTrap diam("Abou");

	diam.guardGate();
	diam.highFivesGuys();
	diam.attack("Kevin");
	diam.takeDamage(5);
	diam.beRepaired(3);
	diam.whoAmI();
	diam.status();

	return (0);
}