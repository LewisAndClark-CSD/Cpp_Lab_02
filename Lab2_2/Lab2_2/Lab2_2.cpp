//Program: Lab2_2.cpp
//Author: Luke Gosnell
//Date: 1/23/2015
//This program picks a number between 1 and 100 and tells the user to guess the number. It will tell the user if the number is higher or lower than their guess.


#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()

{
	cout << "Welcome to Guess My Number!" << endl;
	cout << "I'm thinking of a number between 1 and 100." << endl;
	cout << "Try to guess it in as few attempts as possible." << endl;
	cout << endl;

	int number = 0;
	int tries = 0;
	int guess = 0;
	srand(time(0));
	number = rand() % 100 + 1;
	cout << "Guess: ";
	cin >> guess;

	while (guess != number){
		tries++;

		if (guess < number){
			cout << "Higher!" << endl;
			cout << "Guess: ";
			cin >> guess;
		}
		else {
			cout << "Lower!" << endl;
			cout << "Guess: ";
			cin >> guess;
		}
	}

	cout << "Congrats! You got it!" << endl;
	cout << "The number was " << number << "!" << " And it only took you " << tries << " tries!" << endl;
	cout << "Press enter to exit.";
	getchar();
	getchar();
	return 0;
}


