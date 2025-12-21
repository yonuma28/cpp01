#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"
#include <iostream>

class HumanB {
	public:
		HumanB(const std::string name);
		~HumanB();
		void attack();
		void setWeapon(Weapon &weapon);

	private:
		std::string name_;
		Weapon* weapon_;
};

#endif //HUMANB_H
