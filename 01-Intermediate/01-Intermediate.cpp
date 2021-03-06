// See http://www.reddit.com/r/dailyprogrammer/comments/pihtx/intermediate_challenge_1/
#include "stdafx.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <vector>
#include "event.h"
using namespace std;

vector<Event> events;

void DisplayMenu()
{
	cout << "\nThis program will allow you to schedule events by hour on specified days.\n";
	cout << "1\t Create Event\n" <<
		"2\t View Events\n" <<
		"3\t Edit Event\n" <<
		"4\t Remove Event\n" <<
		"Esc\t Exit Program";
}

void DisplayPrompt()
{
	cout << "\n> ";
}

void CreateEvent()
{
	cout << "\nCreating a new event.";

	string name;
	string date;
	string hour;

	cout << "\nEnter event name: ";
	cin >> name;

	cout << "\nEnter date (dd/mm/yyyy): ";
	cin >> date;

	cout << "\nEnter hour (0-23): ";
	cin >> hour;

	Event event(events.size() + 1, name, date, hour);
	events.push_back(event);
}

void EditEvent()
{
	if (events.size() == 0)
	{
		cout << "\nThere are no events in the system yet.";
		return;
	}

	int index;
	cout << "\nThere are " << events.size() << ((events.size() == 1) ? " event " : " events ") << "in the system.";
	cout << "\nEnter the index of the event to edit: ";
	cin >> index;

	string name;
	string date;
	string hour;

	cout << "\nEnter event name: ";
	cin >> name;

	cout << "\nEnter date (dd/mm/yyyy): ";
	cin >> date;

	cout << "\nEnter hour (0-23): ";
	cin >> hour;

	Event event(events.size() + 1, name, date, hour);

	events[index] = event;
}

void RemoveEvent()
{
	if (events.size() == 0)
	{
		cout << "\nThere are no events in the system yet.";
		return;
	}

	int index;
	cout << "\nThere are " << events.size() << ((events.size() == 1) ? " event " : " events ") << "in the system.";
	cout << "\nEnter the index of the event to delete: ";
	cin >> index;
	
	events.erase(events.begin() + index);

	cout << "\n There are " << events.size() << ((events.size() == 1) ? " event " : " events ") << "in the system.";
}

void DisplayEvents()
{
	cout << "\nShowing details for " << events.size() << ((events.size() == 1) ? " event." : " events.");

	for (int i = 0; i < events.size(); i++)
	{
		Event event = events[i];
		event.ShowDetails();
	}
}

void ParseInput(int input)
{
	// Match ASCII code to numeric value
	input -= 48;

	switch (input)
	{
	case 1:
		CreateEvent();
		break;

	case 2:
		DisplayEvents();
		break;

	case 3:
		EditEvent();
		break;

	case 4:
		RemoveEvent();
		break;

	case 27:
	default:
		return;
	}
}

int main()
{
	int input = -1;

	while (input != 27)
	{
		DisplayMenu();
		DisplayPrompt();
		input = _getch();
		ParseInput(input);
	}

    return 0;
}

