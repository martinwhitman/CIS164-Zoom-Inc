//presumably we'll change this header
#include "pch.h"
#include <iostream>
#include <string>
#include "room.h"

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
		  warning(warning)
	{
	}

	//getters and setters

	string room_dialog() const
	{
		return "You are in the " + room.name;
	}

	string get_successful_outcome() const
	{
		return successfulOutcome;
	}

	void set_successful_outcome(const string& successful_outcome)
	{
		successfulOutcome = successful_outcome;
	}

	string get_unsuccessful_outcome() const
	{
		return unsuccessfulOutcome;
	}

	void set_unsuccessful_outcome(const string& unsuccessful_outcome)
	{
		unsuccessfulOutcome = unsuccessful_outcome;
	}

	string get_death_message() const
	{
		return deathMessage;
	}

	void set_death_message(const string& death_message)
	{
		deathMessage = death_message;
	}

	string get_victory_message() const
	{
		return victoryMessage;
	}

	void set_victory_message(const string& victory_message)
	{
		victoryMessage = victory_message;
	}

	string get_greeting() const
	{
		return greeting;
	}

	void set_greeting(const string& greeting)
	{
		this->greeting = greeting;
	}

	string get_warning() const
	{
		return warning;
	}

	void set_warning(const string& warning)
	{
		this->warning = warning;
	}



};


