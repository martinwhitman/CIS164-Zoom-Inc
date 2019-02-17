#include <string>

class player
{
	public:
		player(std::string);
		void setName(std::string),
			setHealth(int),
			setShield(int),
			setScore(int),
			setDamage(),
			attack();
		std::string getName();
		int getHealth(),
			getMaxHealth(),
			getShield(),
			getScore(),
			getDamage();
		void die();
		
	private:
		std::string playerName;
		int maxHealth;
		int playerHealth;
		int playerShield;
		int playerScore;
		int playerDamage;
};
