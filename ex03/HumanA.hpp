#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"
#include <iostream>

class HumanA {
	public:
		HumanA(const std::string name, Weapon& weapon);
		~HumanA();
		void attack();

	private:
		std::string name_;
		Weapon& weapon_;
};

#endif
