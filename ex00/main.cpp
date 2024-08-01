/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaul-kr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 11:52:30 by jpaul-kr          #+#    #+#             */
/*   Updated: 2024/08/01 12:24:33 by jpaul-kr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap a("Fernando");
	ClapTrap b("Alonso");

	std::cout << std::endl;
	std::cout << "ScavTrap: att: " << b.getDamage() << " hp: " << \
		b.getHp() << " energy: " << b.getEnp() << std::endl;std::cout << std::endl;
	std::cout << std::endl;
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
	std::cout << std::endl;
	return 0;
}
