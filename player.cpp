// 1. For the player shield I figure one shield can be picked
// 	  up with a low chance per room, and one shield blocks one attack.
//    Maybe we ask if the player wants to use a shield each attack?
// 2. Should we ask the user for a name?


#include <iostream>
#include <typeinfo>
using namespace std;

class Player
{
	void playerStart();
	string getStats();
	void die();
	
	string playerName;
	int playerHp, 
		maxHp = 20, // What should the max hp be?
		playerShield = 0,
		playerDamage;
		
		
	int main(){
		playerStart(); // Ask user for their name
		
		//Here is where we would call the dialogue
		
		return 0;
	}
	
	void playerStart() {
		playerHp = maxHp; // Set player hp to max
		playerShield = 0;
	}
	
	string getStats(){
		cout << "Health: " << playerHp << endl;
		cout << "Shield(s): " << playerShield << endl;
		
		// We could display the weapon and bonus attack points
		// the weapon gives here as well
	}
	
	void die(){
		
	}
	
};
