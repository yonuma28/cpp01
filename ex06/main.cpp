#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;
	if (argc != 2) {
		std::cerr << "Usage: " << argv[0] << " <level>" << std::endl;
        std::cerr << "DEBUG -> INFO -> WARNING -> ERROR." << std::endl;
		return (1);
	}
	std::string level = argv[1];
    harl.complain(level);
    return (0);
}
