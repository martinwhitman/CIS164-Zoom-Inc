// Monster.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <random>
using namespace std;

class Monster {
	public:
		int hitpoints = hitpointSet();
		int attackPower = attackPowerSet();

		void hitpointCheck()
		{
			cout << hitpoints << " remaining." << endl;
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
			int hitpointSet() {
				// Randomly generataes a number from 1 to 3
				random_device rd;
				mt19937 gen(rd());
				uniform_int_distribution<> dis(1, 3);
				return dis(gen);
			}

			int attackPowerSet() {
				// Randomly generataes a number from 1 to 2
				random_device rd;
				mt19937 gen(rd());
				uniform_int_distribution<> dis(1, 2);
				return dis(gen);
			}

		
};

