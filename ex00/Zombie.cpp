# include "Zombie.hpp"

Zombie::Zombie() : name_("default") {}

Zombie::Zombie( std::string name ) : name_( name ) {
}

Zombie::~Zombie() {
	std::cout << name_ <<  " is destroyed." << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
