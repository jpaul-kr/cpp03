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

ScavTrap::ScavTrap() : ClapTrap() 
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	_hp = 100;
	_enp = 50;
	_dam = 20;
}

ScavTrap::ScavTrap(const string name) : ClapTrap(name) 
{
	std::cout << "ScavTrap init constructor called" << std::endl;
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

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::attack(const string& target)
{
	if (!this->_hp || !this->_enp)
		return ;
	this->_enp--;
	std::cout << "ScavTrap " << this->_name << " attacks " << target \
		<< ", causing " << this->_dam << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& cpy)
{
	std::cout << "ScavTrap copy operator called" << std::endl;
	this->_name = cpy._name;
	this->_hp = cpy._hp;
	this->_enp = cpy._enp;
	this->_dam = cpy._dam;
	return *this;
}
