/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaul-kr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 11:53:19 by jpaul-kr          #+#    #+#             */
/*   Updated: 2024/08/01 12:18:36 by jpaul-kr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap a("Fernando");
	ScavTrap b("Alonso");
	FragTrap c("Marinez");

	std::cout << std::endl;
	std::cout << "FragTrap: att: " << c.getDamage() << " hp: " << \
		c.getHp() << " energy: " << c.getEnp() << std::endl;
	std::cout << std::endl;
	a.attack(c.getName());
	c.takeDamage(a.getDamage());
	c.attack(a.getName());
	a.takeDamage(c.getDamage());
	a.attack(c.getName());

	//b.setEnp(30);
	//c.setEnp(30);
	while (c.getHp() && b.getHp())
	{
		b.attack(c.getName());
		c.takeDamage(b.getDamage());
		c.attack(b.getName());
		b.takeDamage(c.getDamage());
		if (!b.getEnp() && !c.getEnp())
			return 0;
	}
	std::cout << std::endl;
	c.highFivesGuys();
	b.guardGate();
	std::cout << std::endl;
	return 0;
}
