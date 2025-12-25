#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <string>
# include <iostream>

class Zombie {
	public: 
		Zombie();
		Zombie(std::string name_);
		~Zombie();
		void	announce();
	private: 
		std::string	name_;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif // ZOMBIE_H
