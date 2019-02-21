//Group project, Zoom
//Carl Phillips

#include <iostream>

#include "weapon.h"
#include "Weapon.cpp"
#include "Monster.cpp"
#include "Monster.h"
#include "player.cpp"
#include "Player.h"
#include "Room.h"
#include "Room.cpp"
using namespace std;

void mainMenu();
void playGame();

	weapon machette;
	machette.weaponName = "Machette";
	machette.hitPoints = 12;
	weapon knife;
	knife.weaponName = "Knife";
	knife.hitPoints = 4;
	weapon sword;
	sword.weaponName = "Sword";
	sword.hitPoints = 16;
	weapon pistol;
	pistol.weaponName = "Pistol";
	pistol.hitPoints = 25;
	
int main()
{
	mainMenu();
	
	return 0;
}

void mainMenu()
{
	int menuChoice;
	cout << "Zoom Inc.  |  Text-Based Adventure Game" << endl;
	cout << "Main Menu" << endl;
	cout << "1. Play Game" << endl;
	cout << "2. Leave Game" << endl;
	
	cin >> menuChoice;
	do {
		if(menuChoice = 1) {
			playGame();
		} else if(menuChoice == 2) {
			return 0;
		}
	} while(menuChoice != 1 || menuChoice != 2);
}

void playGame()
{
	
}
