#include "room.h"
#include <string>
using namespace std;
//basic skeleton for attempts to use as member of another class
class room
{
	string name;

public:
	string get_name() const
	{
		return name;
	}

	void set_name(const string& name)
	{
		this->name = name;
	}
};