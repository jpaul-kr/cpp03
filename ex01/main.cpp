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

int	main()
{
	ClapTrap a("Fernando");
	ScavTrap b("Alonso");

	a.setDamage(2);
	a.attack(b.getName());
	b.takeDamage(a.getDamage());
	b.attack(a.getName());
	a.takeDamage(b.getDamage());
	a.attack(b.getName());
	b.setEnp(0);
	b.attack(a.getName());

	b.guardGate();
	return 0;
}
