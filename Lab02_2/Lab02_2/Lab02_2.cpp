// Lab02_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int main();

	int number = rand() % 100;
	int guess = 0;

	cout << "Guess a number between 1 and 100. ";
	
	cin >> guess;
	cin.sync();

	while (guess != number){
		
		cin >> guess;
		cin.sync();

		if (guess > number){
			cout << "Your guess is too high, try again." << endl;

		}

		if (guess < number){
			cout << "Your guess is too low, try again." << endl;

		if (guess == number){
			cout << "Great Job! You guessed the number correctly. The number was " << number << "." << endl;

			}

		}

	}


	getchar();

	return 0;
}

