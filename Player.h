#include <string>
#pragma once

class player
{
	private:
		int playerHp;
		int playerShield;
		int playerScore;
		int playerDamage;
		int critChance;
		int location;	
		int damageTaken = 0;
		int totalDamageTaken = 0;	
	public:
		player(std::string);
		void setName(std::string),
			setHitPoints(int),
			setShield(int),
			setScore(int),
			setAttackPower(int),
			setDamageTaken(int),
			attack(),
			die();
		std::string getName();
		int getHitPoints(),
			getMaxHealth(),
			getShield(),
			getScore(),
			getAttackPower(),
			getLocation(),
			getDamageTaken(),
			getTotalDamageTaken();
		std::string playerName;	
};
