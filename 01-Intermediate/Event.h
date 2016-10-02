#pragma once
#include <string>
using namespace std;

class Event
{
public:
	Event(int id, string name, string date, string hour);
	~Event();

	void ShowDetails();

private:
	int Id;
	string Name;
	string Date;
	string Hour;
};

