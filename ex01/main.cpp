#include "Zombie.hpp"

int main() {
    int N = 100000;
    Zombie* horde = NULL;

    try {
        horde = zombieHorde(N, "Zombie");
        if (horde) {
            for (int i = 0; i < N; ++i) {
                horde[i].announce();
            }
            delete[] horde;
        }
		else
			return (1);
    } catch (const std::exception& e) {
        std::cerr << "Fatal Error: " << e.what() << std::endl;
        return 1;
    }
    return 0;
}
