//CarlPhillips, cfphillips2@dmacc.edu
#pragma once
#include <string>
using namespace std;

class weapon
{
	public:
		weapon();
		weapon(string newWeapon, int hp);
		void descWeapon();
		
		std::string weaponName;
		int hitPoints;
};
