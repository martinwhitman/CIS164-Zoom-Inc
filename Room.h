#pragma once
#include <string>
using namespace std;
//basic skeleton for attempts to use as member of another class

class room
{
	public:
	string name;

	room(string name);
	string get_name();
	void set_name(string name);
	void roomInfo(room current);
};
