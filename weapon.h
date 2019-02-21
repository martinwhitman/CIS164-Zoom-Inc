//CarlPhillips, cfphillips2@dmacc.edu
#pragma once
#include <string>
using namespace std;

class Weapon
{
	public:
		Weapon();
		Weapon(string newWeapon, int hp);
		void descWeapon();
		void setDamage(int damage);	
		std::string weaponName;
		int hitPoints;
		int getDamage();
};
