/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaul-kr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 10:51:01 by jpaul-kr          #+#    #+#             */
/*   Updated: 2024/07/22 12:00:01 by jpaul-kr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	_hp = 100;
	_enp = 100;
	_dam = 30;
}

FragTrap::FragTrap(string name) : ClapTrap(name)
{
	std::cout << "FragTrap init constructor called" << std::endl;
	_name = name;
	_hp = 100;
	_enp = 100;
	_dam = 30;
}

FragTrap::FragTrap(const FragTrap& cpy) : ClapTrap(cpy)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = cpy;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& cpy)
{
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	this->_name = cpy._name;
	this->_hp = cpy._hp;
	this->_enp = cpy._enp;
	this->_dam = cpy._dam;
	return *this;
}


void	FragTrap::attack(const string& target)
{
	if (!this->_hp || !this->_enp)
		return ;
	this->_enp--;
	std::cout << "FragTrap " << this->_name << " attacks " << target \
		<< ", causing " << this->_dam << " points of damage!" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << _name << " is searching someone to highfive!" << std::endl;
}
