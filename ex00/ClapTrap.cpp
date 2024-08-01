/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaul-kr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 11:52:13 by jpaul-kr          #+#    #+#             */
/*   Updated: 2024/08/01 11:48:59 by jpaul-kr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hp(10), _enp(10), _dam(0) 
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const string name) : _name(name), _hp(10), _enp(10), _dam(0) 
{
	std::cout << "Init constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

ClapTrap::~ClapTrap() 
{
	std::cout << "destructor called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& cpy)
{
	std::cout << "Copy operator called" << std::endl;
	this->_name = cpy._name;
	this->_hp = cpy._hp;
	this->_enp = cpy._enp;
	this->_dam = cpy._dam;
	return *this;
}

void	ClapTrap::attack(const string& target)
{
	if (!this->_hp || !this->_enp)
		return ;
	this->_enp--;
	std::cout << "ClapTrap " << this->_name << " attacks " << target \
		<< ", causing " << this->_dam << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!this->_hp)
		return ;
	this->_hp <= amount ? this->_hp = 0 : this->_hp -= amount;
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " damage," \
		<< " has " << this->_hp << " hitpoints left" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->_hp || !this->_enp)
		return ;
	this->_hp += amount;
	this->_enp--;
	std::cout << "ClapTrap " << this->_name << " recovers " << amount << " hitpoints" \
		<< " now he has " << this->_hp << "!!" << std::endl;
}

void	ClapTrap::setDamage(unsigned int amount)
{
	this->_dam = amount;
}

unsigned int	ClapTrap::getDamage() const
{
	return this->_dam;
}

void	ClapTrap::setHp(unsigned int amount)
{
	this->_hp = amount;
}

unsigned int	ClapTrap::getHp() const
{
	return this->_hp;
}

void	ClapTrap::setName(const string name)
{
	this->_name = name;
}

string	ClapTrap::getName() const
{
	return this->_name;
}

void	ClapTrap::setEnp(unsigned int amount)
{
	this->_enp = amount;
}

unsigned int	ClapTrap::getEnp() const
{
	return this->_enp;
}
