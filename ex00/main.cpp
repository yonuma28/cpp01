/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonuma <yonuma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 19:26:36 by yonuma            #+#    #+#             */
/*   Updated: 2025/11/08 19:30:04 by yonuma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie zombie1 = Zombie("zombie1");
	Zombie* zombie1_child = zombie1.newZombie("child zombie1");
	zombie1.announce();
	zombie1_child->announce();
	zombie1.randomChump("zombie2");
	delete zombie1_child;
	return 0;
}
