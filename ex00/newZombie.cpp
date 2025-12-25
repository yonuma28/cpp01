# include "Zombie.hpp"

Zombie* newZombie(std::string   name_)
{
    Zombie* zombie_ptr = new Zombie( name_ );
    return zombie_ptr;
}
