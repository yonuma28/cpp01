#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>

class Zombie
{
    private:
        std::string name_;
    public:
        // OCM
        Zombie();
        Zombie(std::string name_);
        ~Zombie();
        Zombie(const Zombie& copy);
        Zombie& operator=(const Zombie& copy);
        void    announce();
        void    setName(std::string name_);
};

Zombie* zombieHorde(int N, std::string name);

# endif // ZOMBIE_H
