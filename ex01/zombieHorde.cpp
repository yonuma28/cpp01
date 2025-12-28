# include "Zombie.hpp"
# include <sstream>

Zombie* zombieHorde(int N, std::string name)
{
    if (N <= 0 || 10000 < N) { 
        std::cerr << "Error: Invalid number of zombies (N=" << N << ")." << std::endl;
        return NULL;
    }

    Zombie* horde = new Zombie[N];
    for (int i = 0; i < N; i++) {
        horde[i].setName(name);
    }
    return horde;
}
