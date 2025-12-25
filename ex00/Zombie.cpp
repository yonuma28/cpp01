# include "Zombie.hpp"

Zombie::Zombie() : name_("default") {}

Zombie::Zombie( std::string name ) : name_( name ) {
	std::cout << name_ << ": created a constractor." << std::endl;
}

Zombie::~Zombie() {
	std::cout << name_ <<  " is destroyed." << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
