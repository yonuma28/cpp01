# include "Zombie.hpp"

Zombie::Zombie() : name_("default") {}

Zombie::Zombie(std::string name) : name_(name) {}

Zombie::~Zombie()
{
    std::cout << name_ << " is destroyed." << std::endl;
}

void Zombie::announce(void) {
	std::cout << this->name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
	this->name_ = name;
}
