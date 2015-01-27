// Lab2_2.cpp : Defines the entry point for the console application.
//

/* 
*******************
*  Author: Brad   *
*  Date: 1/23/15  *
*******************
*/

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int _tmain(){

	//Initialize and declare variables
	int guess = NULL, tries = 0;

	//Get Answer
	srand(time(NULL));
	int the_number = rand() % 101 + 1;

	//Welcoming
	cout << "Welcome to 'Guess My Number!" << endl;
	cout << "I'm thinking of a number between 1 and 100." << endl;
	cout << "Try to guess it in as few attempts as possible" << endl;
	cout << endl;

	//Priming read
	cout << "Take a guess: ";
	cin >> guess;
	cin.sync();

	//The 'Loop'
	while (guess != the_number){

		//Priming read/repeat check
		if (guess > the_number){
			cout << "Lower..." << endl;
		}
		else{
			cout << "Higher..." << endl;
		}
		//Repeat get guess
		cout << "Take a guess: ";
		cin >> guess;
		cin.sync();

		++tries;
	}
	//Winning display
	cout << "You guessed it! The number was " << the_number << endl;
	cout << "And it only took you, " << tries << " tries!" << endl;
	cout << endl;
	system("pause");

	return 0;
}

