/****************
* Lab2_2.cpp     *
* By: Zach Golik *
* Date: 1/27/15  *
 ****************/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std;

int main(){
	int number = 0, i = 0, guess = 0;
	srand(time(NULL));
	number = rand() % 100 + 1;
	cout << "\tWelcome to 'Guess My Number'!" << endl <<
		"I'm thinking of a number between 1 and 100." << endl <<
		"Try to guess it in as few attempts as possible." << endl;
	cout << "Take a guess: ";
	cin >> guess;
	while (guess != number){
		if (guess < number){
			cout << "Higher..." << endl;
			i += 1;
		}
		else if (guess > number) {
			cout << "Lower..." << endl;
			i += 1;
		}
		cout << "Take a guess: ";
		cin >> guess;
	}
	cout << "You guessed it! The number was " << number << endl <<
		"And it only took you " << i << " tries!" << endl << endl <<
		"Press the enter key to exit.";
	getchar();
	getchar();
	return 0;
}