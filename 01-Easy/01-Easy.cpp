// 01-Easy.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	cout << "\nPress Escape to exit";
	while (_getch() != 27)
		;

    return 0;
}

