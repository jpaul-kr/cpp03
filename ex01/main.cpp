/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaul-kr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 11:53:19 by jpaul-kr          #+#    #+#             */
/*   Updated: 2024/08/01 12:13:11 by jpaul-kr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ClapTrap a("Fernando");
	ScavTrap b("Alonso");

	std::cout << std::endl;
	std::cout << "ScavTrap: att: " << b.getDamage() << " hp: " << \
		b.getHp() << " energy: " << b.getEnp() << std::endl;
	a.setDamage(2);
	std::cout << std::endl;

	a.attack(b.getName());
	b.takeDamage(a.getDamage());
	b.attack(a.getName());
	a.takeDamage(b.getDamage());
	a.attack(b.getName());
	b.setEnp(0);
	b.attack(a.getName());

	b.guardGate();
	std::cout << std::endl;
	return 0;
}
