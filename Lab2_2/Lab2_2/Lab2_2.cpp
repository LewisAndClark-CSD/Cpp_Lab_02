// Lab2_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
#include <random>
using namespace std;

/**********************************
Created by: Tyler Kapusniak		   |
Date Created: 1/23/15			   |
**********************************/

int main()
{
	/*Explaining the game!*/
	cout << "\t Welcome to 'Guess my number'!" << endl;
	cout << "I'm thinking of a number between 1 and 100" << endl;
	cout << "Try to guess it!" << endl;

	/*Setting inital values*/
	srand(time(0));
	int guess = NULL;
	int Highest = 100;
	int Lowest = 0;
	int RandNumb = rand() % 100 + 1;
	cout << "What is your guess? ";
	cin >> guess;
	while (guess != RandNumb) {
		if (guess > RandNumb) {
			cout << "Lower ";
		}
		else {
			cout << "Higher ";
		}
		guess++;
		cout << "What is your guess? ";
		cin >> guess;
	}
	if (guess == RandNumb) {
		cout << "You guess correct! Good job!" << endl;
		cout << "It toook you " << guess << " tries to guess corectly!";
	}

	getchar();
	getchar();
	return 0;
}

