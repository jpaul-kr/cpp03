#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const string name) : _name(name), _hp(10), _enp(10), _dam(0) {}

ClapTrap::ClapTrap(const ClapTrap& cpy)
{
	*this = cpy;
}

ClapTrap::~ClapTrap() {}

ClapTrap&	ClapTrap::operator=(const ClapTrap& cpy)
{
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
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " damage,"\
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

unsigned int	ClapTrap::getDamage()
{
	return this->_dam;
}

void	ClapTrap::setHp(unsigned int amount)
{
	this->_hp = amount;
}

unsigned int	ClapTrap::getHp()
{
	return this->_hp;
}

void	ClapTrap::setName(const string name)
{
	this->_name = name;
}

string	ClapTrap::getName()
{
	return this->_name;
}

void	ClapTrap::setEnp(unsigned int amount)
{
	this->_enp = amount;
}

unsigned int	ClapTrap::getEnp()
{
	return this->_enp;
}
