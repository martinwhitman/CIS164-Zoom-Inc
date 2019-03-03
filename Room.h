#pragma once
#include <string>
//basic skeleton for attempts to use as member of another class

class room
{
	private:
		std::string name;

	public:
		room(std::string name);
		std::string get_name();
		void set_name(std::string name);
		void roomInfo(room current);
};
