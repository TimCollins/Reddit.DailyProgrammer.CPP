#include "stdafx.h"
#include <iostream>
#include "Event.h"

Event::Event(int id, string name, string date, string hour)
{
	Id = id;
	Name = name;
	Date = date;
	Hour = hour;
}

Event::~Event()
{
}

void Event::ShowDetails()
{
	cout << "\nId: " << Id << "\nName: " << Name << "\nDate: " << Date << "\nHour: " << Hour << "\n";
}
