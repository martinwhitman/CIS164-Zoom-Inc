// Monster.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#pragma once
#include <iostream>
#include <random>
using namespace std;

class Monster {
	public:
		int hitpoints = hitpointSet();
		int attackPower = attackPowerSet();

		void hitpointCheck();
		void description();
	private:
			int hitpointSet();
			int attackPowerSet();
};
