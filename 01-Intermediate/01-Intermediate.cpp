// See http://www.reddit.com/r/dailyprogrammer/comments/pihtx/intermediate_challenge_1/
#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;

void DisplayMenu()
{
	cout << "This program will allow you to schedule events by hour on specified days.\n";
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

int main()
{
	int input = -1;

	while (input != 27)
	{
		DisplayMenu();
		DisplayPrompt();
		input = _getch();
	}

    return 0;
}

