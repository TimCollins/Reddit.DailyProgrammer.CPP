// See http://www.reddit.com/r/dailyprogrammer/comments/pih8x/easy_challenge_1/
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>
#include <sstream>
#include <fstream>
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

	stringstream outputStream;
	outputStream << "Your name is " << name + ", you are " << age << " years old " <<
		"and your username is " << userName + ".";
	string output = outputStream.str();

	ofstream file;

	file.open("output.txt");
	file << output;
	file.close();

	cout << output;

	cout << "\nPress Escape to exit...";
	while (_getch() != 27)
		;

    return 0;
}

