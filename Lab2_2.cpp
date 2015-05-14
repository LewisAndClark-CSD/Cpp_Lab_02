// Lab2_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main()
{
	int number = 0;
	srand(time(0));
	number = rand() % 100 + 1;
	int tries = 0;
	int guess = NULL;

	cout << "Welcome to Guess My Number!" <<  endl;
	while (guess != number)
	{
		cout << "Enter a guess: ";
		cin >> guess;
		++tries;

		if (guess > number){
			cout << "Lower." << endl;
		}
		else if (guess < number){
			cout << "Higher." << endl;
		}
		else {
			cout << "Thats it! The number was " << number << endl;
			cout << "And it only took you: " << tries << " guesses" << endl;
			guess = number;
		}
	}
		getchar();
		getchar();
		return 0;
	}

