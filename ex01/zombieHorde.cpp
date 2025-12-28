# include "Zombie.hpp"
# include <sstream>

Zombie* zombieHorde(int N, std::string name)
{
    if (N <= 0) { 
        std::cerr << "Error: Invalid number of zombies (N=" << N << ")." << std::endl;
        return NULL;
    }

    Zombie* horde = NULL;
    try {
        horde = new Zombie[N];
        for (int i = 0; i < N; i++) {
            horde[i].setName(name);
        }
    } catch (const std::exception& e) {
        std::cerr << "Error: Allocation failed: " << e.what() << std::endl;
        return NULL;
    }
    return horde;
}
