// Monster.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#pragma once
#include <iostream>
#include <random>

class Monster {
	public:
		int hitPoints = setInitialHitPoints();
		int attackPower = setAttackPower();

		int getHitPoints();
		int setHitPoints(int hitpoints);
		int getAttackPower();

		int setInitialHitPoints();
		int setAttackPower();		
		void description();

};
