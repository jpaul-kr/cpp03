#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string>

using std::string;

class ClapTrap
{
	public:
		ClapTrap(const string name);
		ClapTrap(const ClapTrap& cpy);
		~ClapTrap();

		ClapTrap&	operator=(const ClapTrap& cpy);

		void		attack(const string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		setDamage(unsigned int amount);
		unsigned int	getDamage();
		void		setHp(unsigned int amount);
		unsigned int	getHp();
		void		setName(const string amount);
		string		getName();
		void		setEnp(unsigned int amount);
		unsigned int	getEnp();

	private:
		string		_name;
		unsigned int	_hp;
		unsigned int	_enp;
		unsigned int	_dam;
};

#endif
