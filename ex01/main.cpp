#include "ClapTrap.hpp"

int	main()
{
	ClapTrap a("Fernando");
	ClapTrap b("Alonso");

	a.setDamage(2);
	b.setDamage(3);

	//a.setEnp(30);
	//b.setEnp(30);
	while (a.getHp() && b.getHp())
	{
		a.attack(b.getName());
		b.takeDamage(a.getDamage());

		b.attack(a.getName());
		a.takeDamage(b.getDamage());
		if (!a.getEnp() && !b.getEnp())
		{
			std::cout << "this ends in a tie!" << std::endl;
			return 0;
		}
		//a.beRepaired(2);
		//b.beRepaired(1);
	}
	return 0;
}
