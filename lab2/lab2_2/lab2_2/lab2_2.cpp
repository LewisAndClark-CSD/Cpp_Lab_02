// lab2_2.cpp 
// Jason Nguyen
// 1/23/15

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	cout << "\tWelcome to 'Guess My Number'!" << endl;
	cout << "\nI'm thinking of a number between 1 and 100." << endl;
	cout << "Try to guess it in as few attempt as possible." << endl << endl;

	srand((unsigned)time(0));
	int the_number = (rand() % 100) + 1;
	int tries = 0;
	int guess = 0;
	
	while (guess != the_number){
		cout << "Take a guess: ";
		cin >> guess;
		++tries;

		if (guess != the_number){
			if (guess > the_number){
				cout << "Lower..." << endl;
			}
			else{
				cout << "Higher..." << endl;
			}
		}
	}

	cout << "You guessed it! The number was " << the_number << endl;
	cout << "And it only took you " << tries << "tries!" << endl << endl;

	cout << "\n\nPress the enter key to exit. ";

	return 0;
}

