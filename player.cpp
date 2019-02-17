// 1. For the player shield I figure one shield can be picked
// 	  up with a low chance per room, and one shield blocks one attack.
//    Maybe we ask if the player wants to use a shield each attack?
// 2. Should we ask the user for a name?


#include <iostream>
#include <typeinfo>
using namespace std;

class Player
{
	private:
		const int maxHealth = 20; // What should max hp be? 
		int health = maxHealth; 
		int shield = 0;
		int score = 0;

	public:		
		void setHealth(int h) { health = h ; } // Setters
		void setShield(int s) { shield = s ; }
		void setScore(int s) { score = s ; }
		
		int getHealth() { return health; } // Getters
		int getShield() { return shield; }
		int getScore() { return score; }
};

int main(){

	return 0;
}
