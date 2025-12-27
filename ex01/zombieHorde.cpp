# include "Zombie.hpp"
# include <sstream>

Zombie* zombieHorde(int N, std::string name)
{
    if (N <= 0) return nullptr;

    Zombie* horde = nullptr;
    try {
        horde = new Zombie[N];
        for (int i = 0; i < N; i++) {
            horde[i].setName(name); 
        }
        return horde;
    } catch (...) {
        delete[] horde; 
        std::cerr << "Error: Exception during initialization." << std::endl;
        throw;
    }
}