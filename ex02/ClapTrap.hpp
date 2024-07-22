/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaul-kr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 11:53:26 by jpaul-kr          #+#    #+#             */
/*   Updated: 2024/07/22 11:56:56 by jpaul-kr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string>

using std::string;

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(const string name);
		ClapTrap(const ClapTrap& cpy);
		~ClapTrap();

		ClapTrap&	operator=(const ClapTrap& cpy);

		virtual void		attack(const string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			setDamage(unsigned int amount);
		unsigned int		getDamage();
		void			setHp(unsigned int amount);
		unsigned int		getHp();
		void			setName(const string amount);
		string			getName();
		void			setEnp(unsigned int amount);
		unsigned int		getEnp();

	protected:
		string			_name;
		unsigned int		_hp;
		unsigned int		_enp;
		unsigned int		_dam;
};

#endif
