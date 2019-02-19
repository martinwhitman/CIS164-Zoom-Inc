

//presumably we'll change this header

#include <iostream>
#include <string>

using namespace std;

class dialog
{
	room thisRoom;
	string successfulOutcome;
	string unsuccessfulOutcome;
	string deathMessage;
	string victoryMessage;
	string greeting;
	string warning;


//constructors, can add more obv
public:
	dialog(const ::room& room, const string& successful_outcome, const string& unsuccessful_outcome,
		const string& death_message, const string& victory_message, const string& greeting, const string& warning)
		: room(room),
		  successfulOutcome(successful_outcome),
		  unsuccessfulOutcome(unsuccessful_outcome),
		  deathMessage(death_message),
		  victoryMessage(victory_message),
		  greeting(greeting),
		  warning(warning);


	//getters and setters

	string room_dialog() const;
	string get_successful_outcome() const;
	void set_successful_outcome(const string& successful_outcome);
	string get_unsuccessful_outcome() const;
	void set_unsuccessful_outcome(const string& unsuccessful_outcome);
	string get_death_message() const;
	void set_death_message(const string& death_message);
	string get_victory_message() const;
	void set_victory_message(const string& victory_message);
	string get_greeting() const;
	void set_greeting(const string& greeting);
	string get_warning() const;
	void set_warning(const string& warning);


};
