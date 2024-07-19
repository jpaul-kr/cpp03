/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaul-kr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 11:53:14 by jpaul-kr          #+#    #+#             */
/*   Updated: 2024/07/19 12:58:45 by jpaul-kr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const string name) : ClapTrap(name) 
{
	std::cout << "ScavTrap default connstructor called" << std::endl;
	_name = name;
	_hp = 100;
	_enp = 50;
	_dam = 20;
}

ScavTrap::ScavTrap(const ScavTrap& cpy) : ClapTrap(cpy._name)
{
	std::cout << "ScavTrap copy connstructor called" << std::endl;
	*this = cpy;
}

ScavTrap::~ScavTrap() : ~ClapTrap()
{
	std::cout << "ScavTrap destructor called" << stdd::endl;
}

void	ScavTrap::attack(const string& target)
{
	if (!this->_hp || !this->_enp)
		return ;
	this->_enp--;
	std::cout << "ScavTrap " << this->_name << " attacks " << target \
		<< ", causing " << this->_dam << " points of damage!" << std::endl;
}

void	ScavTrap::gateGuard()
{
}
