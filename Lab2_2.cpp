/*******************
* Program: Lab2_2  *
* Date: 1/23/2015  *
* Author: Bo Meers *
********************/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main(){
	srand(time(NULL));
	int theNumber = rand() % 101 + 1;
	int guess = NULL;
	int tries = 1;
	int gameOver = 1;

	cout << "Welcome to 'Guess My Number'!" << endl;
	cout << "I'm thinking of a number between 1 and 100." << endl;
	cout << "Try to guess it in as few attempts as possible." << endl << endl;

	while (gameOver != 0){
		cout << "Your Guess ";
		cin >> guess;
		cin.sync();
		
		if (guess > theNumber){
			cout << endl << "Guess Lower" << endl << endl;
			++tries;
		}
		else if (guess < theNumber){
			cout << endl << "Guess Higher" << endl << endl;
			++tries;
		}
		else if (guess == theNumber){
			cout << endl << "That's it! :D" << endl << endl;
			gameOver = 0;
		}
	}
	cout << "Congratulations! You guessed " << theNumber << " after " << tries << " tries!" << endl << endl;
	getchar();
	return 0;
}