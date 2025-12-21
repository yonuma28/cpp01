/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonuma <yonuma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 19:26:36 by yonuma            #+#    #+#             */
/*   Updated: 2025/12/21 12:18:35 by yonuma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	Zombie *Zombie1;

	std::cout << "!! Zombie1 !!" << std::endl;
	Zombie1 = newZombie("Zombie1");
	Zombie1->announce();
	delete Zombie1;

	std::cout << "!! Zombie2 !!" << std::endl;
	randomChump("Zombie2");
}
