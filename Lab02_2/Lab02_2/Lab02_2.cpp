// Lab02_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Welcome to 'Guess My Number'!" << endl
		 << "I'm thinking of a number between 1 and 100." << endl
		 << "Try to guess it in as few attempts as possible." << endl;
	srand(time(NULL));
	int theNumber = rand() % (100 + 1);
	int tries = 0;
	int guess;

	cout << "Take a guess: ";
	cin >> guess;

	while (guess != theNumber)
	{
		if (guess < theNumber)
		{
			cout << "Higher..." << endl;
			tries++;
		}
		else
		{
			cout << "Lower..." << endl;
			tries++;
		}
	cout << "Take a guess: ";
	cin >> guess;
	}
	cout << "You guess it! The number was " << theNumber << endl;
	cin.ignore();
	cout << "And it only took you " << tries << " tries!" << endl;
	cout << "<Enter> to Exit";
	cin.ignore();

	return 0;
}

