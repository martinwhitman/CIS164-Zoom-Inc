// 1. For the player shield I figure one shield can be picked
// 	  up with a low chance per room, and one shield blocks one attack.
//    Maybe we ask if the player wants to use a shield each attack?
// 2. Should we ask the user for a name?

#include <string>
#include <iostream>
#include "player.h"

using namespace std;

player::player(std::string name){
	setName(name);
	setHealth(20);
	setShield(0);
	setScore(0);
}

void player::setName(std::string name){
	playerName = name;
}

void player::setHealth(int health){
	playerHealth = health;
}

void player::setShield(int shield){
	playerShield = shield;
}

void player::setScore(int score){
	playerScore = score;
}

void player::setDamage(){

}

void player::attack(){

}

std::string player::getName(){
	return playerName;
}

int player::getHealth(){
	return playerHealth;
}

int player::getShield(){
	return playerShield;
}

int player::getScore(){
	return playerScore;
}

int player::getDamage(){
	return playerDamage;
}


int main(){
	player one("Michelle");
	cout << "Health: " << one.getHealth() << ", Shield: " << one.getShield() << ", Score: " << one.getScore() << endl;
	return 0;
}
