// Monster.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
#include "Monster.h"
using namespace std;

class Monster {
	public:
		int hitPoints = setInitialHitPoints();
		int attackPower = setAttackPower();

		int getHitPoints()
		{
			return hitPoints;
		}

		int setHitPoints(int hitpoints) {
			hitPoints = hitpoints;
		}

		int getAttackPower()
		{
			return attackPower;
		}

		void description() {
			if (attackPower == 1) {
				cout << "a hairy, mean looking ape." << endl;
			}
			else
			{
				cout << "a large ape with red glowing eyes." << endl;
			}
			 
		}
	private:
			int setInitialHitPoints() {
				// Randomly generataes a number from 1 to 3
				random_device rd;
				mt19937 gen(rd());
				uniform_int_distribution<> dis(1, 3);
				return dis(gen);
			}

			int setAttackPower() {
				// Randomly generataes a number from 1 to 2
				random_device rd;
				mt19937 gen(rd());
				uniform_int_distribution<> dis(1, 2);
				return dis(gen);
			}

		
};

