//CarlPhillips, cfphillips2@dmacc.edu
//Text based adventure game

#include <iostream>
#include "weapon.h"

using namespace std;

Weapon::Weapon()
{
}

Weapon::Weapon(string newWeapon, int hp)
{
	this->hitPoints = hp;
	this->weaponName = newWeapon;
}

void Weapon::descWeapon()
{
	cout << weaponName << " : " << hitPoints << endl;
}

void Weapon::setDamage(int damage)
{
	this->hitPoints = damage;
}

int Weapon::getDamage()
{
	return hitPoints;
}

