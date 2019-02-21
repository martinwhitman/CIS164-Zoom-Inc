// combat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <random>

using namespace std;


//  combat should be initiated like this:  player.setHitPoints(combat(monster, player));
int combat(Monster, Player);

int main()
{
 
}
int combat(Monster monster, Player player) {
	// Creates 6 sided dice
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dis(1, 6);
	while (monster.getHitPoints() > 0 && player.getHitPoints() > 0) {
		int monsterRoll = dis(gen);  // Monster's dice
		int playerRoll = dis(gen);	// Player's dice
		if (playerRoll > monsterRoll) {
			monster.setHitPoints(monster.getHitPoints() - player.getAttackPower());
			cout << "You struck the beast!" << endl;
		}
		else if (monsterRoll > playerRoll) {
			player.setHitPoints(player.getHitPoints() - monster.getAttackPower());
			cout << "You were clawed by the ape" << endl;
		}
		else {
			cout << "You clash together but niether of you succeed in your attack" << endl;
		}
	}
	if (player.getHitPoints() <= 0) {
		cout << "You've died of dysentery" << endl;
	}
	else {
		cout << "You are victorious" << endl;
	}
	return player.getHitPoints();
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
