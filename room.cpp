
#include "Room.h"
#include <string>
using namespace std;
//basic skeleton for attempts to use as member of another class

room::room(string name)
{
	set_name(name);
}

string room::get_name()
{
	return name;
}

void room::set_name(string name)
{
	this->name = name;
}

void room::roomInfo(room current)
{
	cout << "You are located in " << current.get_name() << endl;
}
