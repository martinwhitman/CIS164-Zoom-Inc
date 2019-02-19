// Monster.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
#include "Monster.h"
using namespace std;

	void Monster::hitpointCheck()
	{
		cout << hitpoints << " remaining." << endl;
	}

	void Monster::description() {
		if (attackPower == 1) {
			cout << "a hairy, mean looking ape." << endl;
		}
		else
		{
			cout << "a large ape with red glowing eyes." << endl;
		}
		 
	}

	int Monster::hitpointSet() {
		// Randomly generataes a number from 1 to 3
		random_device rd;
		mt19937 gen(rd());
		uniform_int_distribution<> dis(1, 3);
		return dis(gen);
	}

	int Monster::attackPowerSet() {
		// Randomly generataes a number from 1 to 2
		random_device rd;
		mt19937 gen(rd());
		uniform_int_distribution<> dis(1, 2);
		return dis(gen);
	}

