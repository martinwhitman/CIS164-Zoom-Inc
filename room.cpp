#include "Room.h"
#include <string>
using namespace std;
//basic skeleton for attempts to use as member of another class

room::room()
{
	set_name(name);
}

string room::get_name() const
{
	return name;
}

void room::set_name(const string& name)
{
	this->name = name;
}

