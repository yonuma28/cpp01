#ifndef WEAPON_H
# define WEAPON_H

#include <string>

class Weapon
{
	private:
		std::string type_;

	public:
		Weapon(std::string type);
		const std::string& getType();
		void setType(std::string type);
		void getType() const;
};

#endif //WEAPON_H
