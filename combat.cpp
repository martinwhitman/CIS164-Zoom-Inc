
// combat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "player.h"
#include "Monster.h"
#include <iostream>
#include <random>

using namespace std;


//  combat should be initiated like this:  player.setHitPoints(combat(monster, player));

int combat(Monster monster, player Player1) {
	// Creates 6 sided dice
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dis(1, 6);
	while (monster.getHitPoints() > 0 && Player1.getHitPoints() > 0) {
		int monsterRoll = dis(gen);  // Monster's dice
		int playerRoll = dis(gen);	// Player's dice
		if (playerRoll > monsterRoll) {
			monster.setHitPoints(monster.getHitPoints() - Player1.getAttackPower());
			cout << "You struck the beast!" << endl;
			cout << "You have " << Player1.getHitPoints() << endl;
			cout << "Monster has " << monster.getHitPoints() << endl;
		}
		else if (monsterRoll > playerRoll) {
			Player1.setHitPoints(Player1.getHitPoints() - monster.getAttackPower());
			cout << "You were clawed by the ape" << endl;
			cout << "You have " << Player1.getHitPoints() << endl;
			cout << "Monster has " << monster.getHitPoints() << endl;
		}
		else {
			cout << "You clash together but niether of you succeed in your attack" << endl;
			cout << "You have " << Player1.getHitPoints() << endl;
			cout << "Monster has " << monster.getHitPoints() << endl;
		}
	}
	if (Player1.getHitPoints() <= 0) {
		cout << "You've died of dysentery" << endl;
	}
	else {
		cout << "You are victorious" << endl;
	}
	return Player1.getHitPoints();
}
