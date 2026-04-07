#include "Zombie.hpp"

int	main(void)
{
	Zombie z("patrick");
	z.announce();

	Zombie *zz = newZombie("michel"); 
	zz->announce();

	randomChump("Pierre");

	delete zz;

	return (0);
}
