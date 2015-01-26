// Lab02_2.cpp : 
// Andrew Hecky | 01-234-2015
/*********************************************************************
* 2. Translate the Guess My Number game from our book into a         * 
*    working C++ program.                                            *
**********************************************************************
*                          Guess My Number                           *
*====================================================================*
* The computer picks a random number between 1 and 100 The player    *
* tries to guess it and the computer lets the player know if the     *
* guess is too high, too low or right on the money                   *
*********************************************************************/


#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	// Program Open
	cout << "\tWelcome to 'Guess My Number'!" << endl;
	cout << "\nI'm Thinking of a number between 1 and 100. " << endl;
	cout << "Try to guess it in as few attempts as possible. " << endl;
	srand(time(NULL));

	// Setting Initial Values
	int the_number = rand() % 101;
	int guess = 0;
	int tries = 0;
	
	// OPEN Guessing Loop
	while (guess != the_number)
	{
		cout << endl;
		cout << "Take A Guess: "; // Input Prompt
		cin >> guess; // User Guess
		cin.sync();
		tries = tries + 1;

		// If The_Number is Smaller than the Guess
		if (guess > the_number){
			cout << "Lower... ";}

		// If The_Number is Larger than the Guess
		if (guess < the_number){
			cout << "Higher... ";}
	} // CLOSE Guessing Loop

	// Program Close
	cout << "You Guessed it! The number was " << the_number << endl;
	cout << "And it only took you " << tries << " tries!\n" << endl;
	cout << endl;
	cout << endl;
	cout << "Press the enter key to exit. ";
	getchar();

	return 0;
}

