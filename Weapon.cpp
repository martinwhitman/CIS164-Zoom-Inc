//CarlPhillips, cfphillips2@dmacc.edu
//Text based adventure game

#include <iostream>
#include "weapon.h"

using namespace std;

weapon::weapon()
{
}

weapon::weapon(string newWeapon, int hp)
{
	this->hitPoints = hp;
	this->weaponName = newWeapon;
	cout << "Hello" << endl;
}

void weapon::descWeapon()
{
cout << weaponName << " : " << hitPoints << endl;
}



