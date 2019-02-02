//CarlPhillips, cfphillips2@dmacc.edu
//Text based adventure game

#include <iostream>
using namespace std;

class Weapon
{
	//Access specifier
	public:
		
	//Data Members
	string weaponName;
	int hitPoints;
	
	//Member Functions
	void descWeapon()
	{
		cout << weaponName << ": " << hitPoints << endl;
	}
	//need to make an attack function for player and enemy based on hitpoints from weapon
	
};

int main() 
{
	
	Weapon machette;
	machette.weaponName = "Machette";
	machette.hitPoints = 14;
	
	Weapon currentWeapon = machette;
	
	currentWeapon.descWeapon();


	
	return 0;
}
