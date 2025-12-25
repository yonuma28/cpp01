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
