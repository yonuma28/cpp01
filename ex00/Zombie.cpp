/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonuma <yonuma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 19:21:03 by yonuma            #+#    #+#             */
/*   Updated: 2025/12/21 11:51:24 by yonuma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie() : name_("default") {}

Zombie::Zombie( std::string name ) : name_( name ) {
	std::cout << name_ << ": created a constractor." << std::endl;
}

Zombie::~Zombie() {
	std::cout << name_ <<  " is destroyed." << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
