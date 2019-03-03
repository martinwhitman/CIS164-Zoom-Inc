//CarlPhillips, cfphillips2@dmacc.edu
#pragma once
#include <string>

class Weapon
{
	
	private: 
		int hitPoints;
		std::string weaponName;
	public:
		Weapon();
		Weapon(std::string newWeapon, int hp);
		void descWeapon();
		void setDamage(int damage);	
		std::string setWeaponName(std::string name);
		std::string getWeaponName();
		int getDamage();
};
