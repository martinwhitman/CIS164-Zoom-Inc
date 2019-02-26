
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
		int playerChoice;
		cout << "1. Attack	 2. Block" << endl;
		cin >> playerChoice;
		if (playerChoice == 1) {
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
		} else if (playerChoice == 2) {
			random_device rd;
			mt19937 gen(rd());
			uniform_int_distribution<> dis2(1, 2);
			int monsterAttack = dis2(gen);
			if (monsterAttack == 1) {
				Player1.setHitPoints(Player1.getHitPoints() - monster.getAttackPower());
				cout << "You tried to block but the monsters attack was too strong!" << endl;
				cout << "You have " << Player1.getHitPoints() << endl;
			} else if (monsterAttack == 2) {
				cout << "You have blocked the monsters attack!" << endl;
				cout << "You have " << Player1.getHitPoints() << endl;
				cout << "Monster has " << monster.getHitPoints() << endl;
			}
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
