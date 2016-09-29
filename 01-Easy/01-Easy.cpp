// See http://www.reddit.com/r/dailyprogrammer/comments/pih8x/easy_challenge_1/
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main()
{
	cout << "This program will request some information, display it and then "
		<< "save it to a file called output.txt";

	string name, userName;
	int age;

	cout << "\nEnter your name: ";
	cin >> name;

	cout << "\nEnter your age: ";
	cin >> age;

	cout << "\nEnter your username: ";
	cin >> userName;

	cout << "\nYour name is " << name << ", you are " << age << " years old " << 
		"and your username is " << userName << ".";

	cout << "\nPress Escape to exit";
	while (_getch() != 27)
		;

    return 0;
}

