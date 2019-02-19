// 1. For the player shield I figure one shield can be picked
// 	  up with a low chance per room, and one shield blocks one attack.
//    Maybe we ask if the player wants to use a shield each attack?
// 2. Should we ask the user for a name?


#include <iostream>
#include <typeinfo>
using namespace std;

void playerStart();
string getStats();

string playerName;
int playerHp, 
	maxHp = 20, // What should the max hp be?
	playerShield = 0,
	playerDamage;

void playerStart() {
	cout << "What is your name?: ";
	cin >> playerName;
	cout << "Hello, " << playerName << "...";
	playerHp = maxHp; // Set player hp to max
}

string getStats(){
	cout << "Health: " << playerHp << endl;
	cout << "Shields: " << playerShield << endl;
	
	// We could display the weapon and bonus attack points
	// the weapon gives here as well
}
