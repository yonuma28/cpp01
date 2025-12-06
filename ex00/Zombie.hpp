#ifndef ZOMBIE_H
# include <string>
# include <iostream>

class Zombie {
	public: 
		Zombie(std::string name);
		~Zombie();
		void	announce();
	private: 
		std::string	name_;
};

void	Zombie::announce() {
	std::cout << name_ << std::endl;
}

#endif // ZOMBIE_H
