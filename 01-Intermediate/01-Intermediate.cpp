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

	Event event(1, name, date, hour);
	events.push_back(event);
}

void DisplayEvents()
{
	for (int i = 0; i < events.size(); i++)
	{
		Event event = events[i];
		event.ShowDetails();
	}
}

void ParseInput(int input)
{
	input -= 48;
	cout << "\nInput is " << input;

	switch (input)
	{
	case 1:
		CreateEvent();
		break;

	case 2:
		DisplayEvents();
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

