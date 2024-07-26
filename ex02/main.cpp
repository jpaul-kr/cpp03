/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaul-kr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 11:53:19 by jpaul-kr          #+#    #+#             */
/*   Updated: 2024/07/19 11:53:21 by jpaul-kr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap a("Fernando");
	ScavTrap b("Alonso");
	FragTrap c("Marinez");

	
	a.attack(c.getName());
	c.takeDamage(a.getDamage());
	c.attack(a.getName());
	a.takeDamage(c.getDamage());
	a.attack(c.getName());

	std::cout << std::endl;
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
	c.highFivesGuys();
	b.guardGate();
	return 0;
}
