// Lab02_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	srand(time(0));
	cout << "\ttWelcome to 'Guess My Number'!" << endl <<
		"\nI'm thinking of a number between 1 and 100." << endl <<
		"Try to guess it in as few attempts as possible.\n";
	int the_number = rand() % 100 + 1;
	int tries = 0;
	int guess = 0;
	do
	{
		cout << "Take a guess: ";
		cin >> guess;
		cin.sync();
		if (guess > the_number)
			cout << "Lower...";
		else if (guess < the_number)
			cout << "Higher...";
		tries++;
	} while (guess != the_number);
	
	cout << "You guessed it!  The number was " << the_number << endl <<
		"And it only took you " << tries << " tries!\n";

	cout << "\n\nPress the enter key to exit.";
	getchar();
}