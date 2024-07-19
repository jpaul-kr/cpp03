/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaul-kr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 11:53:39 by jpaul-kr          #+#    #+#             */
/*   Updated: 2024/07/19 12:51:05 by jpaul-kr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap::ScavTrap(const string name);
		ScavTrap::ScavTrap(const ScavTrap& cpy);
		ScavTrap::~ScavTrap();

		void	guardGate();
		void	attack(const string& target) override;
};


#endif
