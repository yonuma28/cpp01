# include "Zombie.hpp"

Zombie* newZombie(std::string name_)
{
    try {
        Zombie* zombie_ptr = new Zombie(name_);
        return zombie_ptr;
    } catch (const std::bad_alloc& e) {
        std::cerr << "Memory allocation failed: " << e.what() << std::endl;
        return nullptr;
    } catch (...) {
        std::cerr << "Unknown exception occurred during Zombie creation." << std::endl;
        throw;
    }
}
