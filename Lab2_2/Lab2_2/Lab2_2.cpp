// ConsoleApplication13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "stdlib.h"
#include "time.h"
using namespace std;
int main()
{
	srand(time(0));
	int tries = 0;
	int number = rand() % 100 + 1;
	int guess = 0;

	cout << "\tWelcome to 'Guess My Number'!";
	cout << "\nI'm thinking of a number between 1 and 100.";
	cout << "Try to guess it in as few attempts as possible.\n";


	while (guess != number){
		cout << "Take a guess: ";
		cin >> guess;
		if (guess > number){
			cout << "Lower..." << endl;
		}
		else if (guess < number){
			cout << "Higher..." << endl;
		}
		tries++;
	}

	cout << "\nYou guessed it! The number was " << number << "  and it only took you " << tries << " tries!" << endl;

	getchar();
	getchar();
	return 0;
}
