#include "Zombie.hpp"

int main() {
	try
	{
		Zombie* Zombie1 = newZombie("Zombie1");
		Zombie1->announce();
		delete Zombie1;
	}
	catch (const std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
		return (1);
	}
	randomChump("Zombie2");

	return (0);
}
