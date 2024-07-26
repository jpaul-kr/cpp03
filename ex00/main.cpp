/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaul-kr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 11:52:30 by jpaul-kr          #+#    #+#             */
/*   Updated: 2024/07/19 11:52:32 by jpaul-kr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		if (a.getHp())
			b.takeDamage(a.getDamage());

		b.attack(a.getName());
		if (b.getHp())
			a.takeDamage(b.getDamage());
		if (!a.getEnp() && !b.getEnp())
		{
			std::cout << "this ends in a tie!" << std::endl;
			return 0;
		}
		//a.beRepaired(3);
		//b.beRepaired(1);
	}
	return 0;
}
