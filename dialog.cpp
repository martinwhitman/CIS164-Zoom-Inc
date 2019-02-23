//presumably we'll change this header

#include <iostream>
#include <string>
#include "dialog.h"
using namespace std;


//constructors, can add more obv

	dialog::dialog()
	{
		
	}
	dialog::dialog(const ::room& room, const string& successful_outcome, const string& unsuccessful_outcome,
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

	string dialog::room_dialog() const
	{
		return "You are in the " + room.name;
	}

	string dialog::get_successful_outcome() const
	{
		return successfulOutcome;
	}

	void dialog::set_successful_outcome(const string& successful_outcome)
	{
		successfulOutcome = successful_outcome;
	}

	string dialog::get_unsuccessful_outcome() const
	{
		return unsuccessfulOutcome;
	}

	void dialog::set_unsuccessful_outcome(const string& unsuccessful_outcome)
	{
		unsuccessfulOutcome = unsuccessful_outcome;
	}

	string dialog::get_death_message() const
	{
		return "YOU HAVE DIED A TERRIBLE DEATH... TRY AGAIN FOOL";
	}

	void dialog::set_death_message(const string& death_message)
	{
		deathMessage = death_message;
	}

	string dialog::get_victory_message() const
	{
		return victoryMessage;
	}

	void dialog::set_victory_message(const string& victory_message)
	{
		victoryMessage = victory_message;
	}

	string dialog::get_greeting() const
	{
		return greeting;
	}

	void dialog::set_greeting(const string& greeting)
	{
		this->greeting = greeting;
	}

	string dialog::get_warning() const
	{
		return warning;
	}

	void dialog::set_warning(const string& warning)
	{
		this->warning = warning;
	}

