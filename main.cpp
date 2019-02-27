//Group project, Zoom
//Created by Carl Phillips

#include <iostream>

//including class files
#include "weapon.h"	
#include "Weapon.cpp"
#include "Monster.cpp"
#include "Monster.h"
#include "player.cpp"
#include "Player.h"
#include "Room.h"
#include "Room.cpp"
#include "combat.cpp"
using namespace std;

//function declarations
int mainMenu();
void createPlayer();
void playGame(player Player1);
void roomWeapons(player Player1);
void generateMonsters(player Player1);

	Weapon currentWeapon;					//this changes to current weapon held by the user
	
	Weapon machette("Machette", 11);		//weapon creation
	Weapon knife("Knife", 2);
	Weapon sword("Sword", 16);
	Weapon pistol("Pistol", 20);
	Weapon axe("Axe", 13);
	Weapon spear("Spear", 9);
	Weapon musket("Musket", 6);
	Weapon lazergun("Lazer Gun", 25);
	
int main()
{
	mainMenu();
	
	return 0;
}

int mainMenu()													//gets input from the user if they want to play the game
{																//or leave the game
	int menuChoice;

	do {
		cout << "Zoom Inc.  |  Text-Based Adventure Game" << endl;
		cout << "Main Menu" << endl;
		cout << "1. Play Game" << endl;
		cout << "2. Leave Game\n";
	
		cin.clear();
		
		cin >> menuChoice;
		cin.ignore(0,'\n');
		
		if(menuChoice == 1) {
			createPlayer();
		} else if(menuChoice == 2) {
			return 0;
		}
		
	} while(menuChoice != 1 || menuChoice != 2);
}

void createPlayer()											//gets a player name for the users character
{															//creates a player object
	cout << "\nEnter Player Name: " << endl;
	string playerName = "H";
	cin >> playerName;
	player Player1(playerName);
	cout << "\nWelcome to the game  " << Player1.getName() << endl;
	playGame(Player1);										//starts the game
	
	mainMenu();												//if they die they are sent back to the main menu
}


void playGame(player Player1)								//plays the game with the player information
{
	//dialog Dialog;
	room Room("First Room");
	cout << "Welcome to your first day of school " << Player1.getName() << ". Take your bag and meet in room 104." << endl;
	
	cout << "You wake up on the floor of room 104. It is dark, the room is a mess, there is a door on the right, and the left." << endl;
	
	currentWeapon = knife;											//sets the users first weapon as a knife
	cout << "You have a knife" << endl;
	currentWeapon.descWeapon();
	string doorChoice;								
	
	while(Room.get_name() != "300") {								//while the player is not in the last room, continue on
		Player1.setAttackPower(currentWeapon.getDamage());			//sets how much damage the player will do based on the weapon
		Room.roomInfo(Room);										//displays the info of the room
		
		generateMonsters(Player1);									//sends to combat
		
		roomWeapons(Player1);										//after combat in the new room there will be weapons to choose from
		
		do {														//decides which way the user will go to continue through the map, this will change when the search tree is done
			cout << "There is a door on your left and one on your right. Which way will you go?" << endl;
			cin >> doorChoice;
			if (doorChoice == "left" || doorChoice == "Left") {
				//stack.push(node);
				//node = node.left;
				cout << "\nDEAD";
				return;
			} else if (doorChoice == "right" || doorChoice == "Right") {
				//stack.push(node);
				//node = node.right;
				Room.set_name("Next Room");
			} else {
				doorChoice = "Wrong";
			}
		} while (doorChoice == "Wrong");						//if neither are chosen you will be asked to choose again
	}
}

void generateMonsters(player Player1)							//creates a random number of enemies and iterates through them to fight individually 
{																//will 
	random_device rd;	
	mt19937 gen(rd());
	uniform_int_distribution<> dis(1, 4);						//random number of monsters
	int numOfMonsters = dis(gen);
	for(int i = 0; i < numOfMonsters; i++){
		Monster Enemy;
		Enemy.setAttackPower();									//random attack power
		Enemy.setHitPoints(5);								
		cout << "A Monster appears.  Health: " << Enemy.getHitPoints() << " Damage: " << Enemy.getAttackPower() << endl;
		Player1.getAttackPower();
		Player1.setHitPoints(combat(Enemy, Player1));			//goes into combat, when returned the player will have different health
	}
}

void roomWeapons(player Player1)							//shows available weapons to pick up in the room
{															//this will be more random and have more variety
	string weaponChoice;
	random_device rd;	
	mt19937 gen(rd());
	uniform_int_distribution<> dis(1, 4);						//random number of monsters
	int caseWeapons = dis(gen);						//random number for weapons, sometimes you dont get to choose
	switch(caseWeapons) {
		case 1: 
			cout << "Available Weapons to pick up: " << endl;
			machette.descWeapon();
			pistol.descWeapon();							//shows two weapons you can pick up
			cout << "Weapon Choice: ";
			cin >> weaponChoice;
			if (weaponChoice == "Machette" || weaponChoice == "machette"){
				cout << "You have dropped " << currentWeapon.weaponName << " and picked up " << weaponChoice << endl;
				currentWeapon = machette;					//will set the current weapon
			} else if(weaponChoice == "Pistol" || weaponChoice == "pistol"){
				cout << "You have dropped " << currentWeapon.weaponName << " and picked up " << weaponChoice << endl;
				currentWeapon = pistol;
			}
			break;
		case 2:
			cout << "Available Weapons to pick up: " << endl;
			knife.descWeapon();
			sword.descWeapon();
			cout << "Weapon Choice: ";
			cin >> weaponChoice;
			if (weaponChoice == "Knife" || weaponChoice == "knife"){
				cout << "You have dropped " << currentWeapon.weaponName << " and picked up " << weaponChoice << endl;
				currentWeapon = knife;
			} else if(weaponChoice == "Sword" || weaponChoice == "sword"){
				cout << "You have dropped " << currentWeapon.weaponName << " and picked up " << weaponChoice << endl;
				currentWeapon = sword;
			}
			break;
		case 3:
			cout << "Available Weapons to pick up: " << endl;
			axe.descWeapon();
			spear.descWeapon();
			cout << "Weapon Choice: ";
			cin >> weaponChoice;
			if (weaponChoice == "Axe" || weaponChoice == "axe"){
				cout << "You have dropped " << currentWeapon.weaponName << " and picked up " << weaponChoice << endl;
				currentWeapon = axe;
			} else if(weaponChoice == "Spear" || weaponChoice == "spear"){
				cout << "You have dropped " << currentWeapon.weaponName << " and picked up " << weaponChoice << endl;
				currentWeapon = spear;
			}
			break;
		case 4:
			cout << "Available Weapons to pick up: " << endl;
			musket.descWeapon();
			lazergun.descWeapon();
			cout << "Weapon Choice: ";
			cin >> weaponChoice;
			if (weaponChoice == "Lazer" || weaponChoice == "lazer" || weaponChoice == "Lazer Gun" || weaponChoice == "lazer gun"){
				cout << "You have dropped " << currentWeapon.weaponName << " and picked up " << weaponChoice << endl;
				currentWeapon = lazergun;
			} else if(weaponChoice == "musket" || weaponChoice == "Musket"){
				cout << "You have dropped " << currentWeapon.weaponName << " and picked up " << weaponChoice << endl;
				currentWeapon = musket;
			}
			break;
	}
}
