// Lab02_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <random>
#include <time.h>
using namespace std;

int main()
{
	cout << "*******************************************************" << endl
		<< "*   WELCOME to						*" << endl
		<< "*         Die - Roller!                                 *" << endl
		<< "*                                                       *" << endl
		<< "* Instructions:                                         *" << endl
		<< "*  To roll, type the number of dice, then the number    *" << endl
		<< "*  of sides then any modifiers, all separated by        *" << endl
		<< "*  spaces.                                              *" << endl
		<< "*							*" << endl
		<< "*  like this : 3 6 - 1                                  *" << endl
		<< "*  that would mean :                                    *" << endl
		<< "*   Roll 3 6 - sided dice, and subtract 1 from each die *" << endl
		<< "*                                                       *" << endl
		<< "*  To exit, enter : 1 1 1                               *" << endl
		<< "*  ENJOY!						*" << endl
		<< "********************************************************" << endl;
	int dice = 0;
	int sides = 0;
	int mod = 0;
	int roll = 0;
	srand(time(0));
	cout << "Your Roll: ";
	cin >> dice >> sides >> mod;
	while (dice != 1 || sides != 1 || mod != 1)
	{
		int total = 0;
		cout << "\n\tResults: ";
		for (int i = 0; i < dice; i++)
		{
			roll = rand() % sides + 1 - mod;
			cout << roll << " ";
			total += roll;
		}
		cout << "\n\t\tTotal: " << total << endl << endl;
		cout << "Your Roll: ";
		cin >> dice >> sides >> mod;
		cin.sync();
	}
	cout << "Thank you, Have a nice day.";
	getchar();
}

