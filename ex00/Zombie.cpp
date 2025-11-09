/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonuma <yonuma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 19:21:03 by yonuma            #+#    #+#             */
/*   Updated: 2025/11/08 19:24:48 by yonuma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie( std::string name ) : name_( name ) {
	std::cout << "created a constractor." << std::endl;
}

Zombie::~Zombie() {
	std::cout << "destroyed a constractor" << std::endl;
}
