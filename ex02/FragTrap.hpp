/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaul-kr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 10:51:11 by jpaul-kr          #+#    #+#             */
/*   Updated: 2024/07/22 11:57:51 by jpaul-kr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
