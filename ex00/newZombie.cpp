# include "Zombie.hpp"

Zombie* newZombie(std::string name_)
{
    return new Zombie(name_);
}
