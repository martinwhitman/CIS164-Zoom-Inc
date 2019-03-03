
#include "Room.h"
#include <string>
//basic skeleton for attempts to use as member of another class

room::room(std::string name)
{
	set_name(name);
}

std::string room::get_name()
{
	return name;
}

void room::set_name(std::string name)
{
	this->name = name;
}

void room::roomInfo(room current)
{
	std::cout << "You are located in " << current.get_name() << std::endl;
}
