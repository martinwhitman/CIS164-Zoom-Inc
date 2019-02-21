#pragma once
#include <string>
using namespace std;
//basic skeleton for attempts to use as member of another class

class room
{
	public:
	string name;

	room();
	string get_name() const;
	void set_name(const string& name);
};
