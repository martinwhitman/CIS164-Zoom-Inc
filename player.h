#include <string>

class player
{
	public:
		player(std::string);
		void setName(std::string),
			setHealth(int),
			setShield(int),
			setScore(int),
			setAttackDamage(),
			setDamageTaken(int),
			attack(),
			die();
		std::string getName();
		int getHealth(),
			getMaxHealth(),
			getShield(),
			getScore(),
			getAttackDamage(),
			getLocation(),
			getDamageTaken(),
			getTotalDamageTaken();
		std::string playerName;
		int playerHealth;
		int playerShield;
		int playerScore;
		int playerDamage;
		int critChance;
		int location;	
		int damageTaken = 0;
		int totalDamageTaken = 0;		
};
