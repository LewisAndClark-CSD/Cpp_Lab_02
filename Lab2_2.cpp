/*****************************
* Cpp_Lab_02 ~~~ Challenge 2 *
* Author: Alton Stillwell    *
* Date: 1/23/15              *
******************************
* Have an intro message, then*
* initilize the variables for*
* theNumber, guess, and tries*
* Afterwards set theNumber   *
* to a(get this) a random num*
* Have the user guess and    *
* have the program respond   *
* accordingly. In the end    *
* give the amount of tries   *
* and have the user press    *
* <enter> to exit            *
*****************************/
#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <string>
using namespace std;
int main()
{
	// Intro text
	cout << "	Welome to 'Guess My Number'!" << endl;
	cout << "I'm thinking of a number between 1 and 100." << endl;
	cout << "Try to guess it in as few attempts as possible" << endl;
	
	// initialize values
	int theNumber = 0;
	int guess = 0;
	cout << "Enter first guess: ";
	cin >> guess;
	int tries = 1;
	
	// generate the random number
	srand(time(NULL));
	theNumber = rand() % 101;
	
	// Guessing loop
	while (guess != theNumber){
		if (guess > theNumber){
			cout << "Lower..." << endl;
		}
		else if (guess < theNumber){
			cout << "Higher..." << endl;
		}
		cout << "Enter new guess: ";
		cin >> guess;
		cout << endl;
		tries += 1;
	}
	
	// Ending text
	cout << endl;
	cout << "You guessed it! The number was " << theNumber << endl;
	cout << "And it only took you " << tries << " tries!" << endl << endl;
	cout << "Press the <enter> key to exit.";
	cin.ignore();
	cin.ignore();
	return 0;
}

