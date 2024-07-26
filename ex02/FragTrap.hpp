#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(string name);
		FragTrap(const FragTrap& cpy);
		~FragTrap();

		FragTrap&	operator=(const FragTrap& cpy);
		void		highFivesGuys();
		void		attack(const string& target);
};

#endif
