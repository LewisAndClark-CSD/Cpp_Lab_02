// Lab02_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <time.h>

using namespace std;


int main()
{
	int number;
	int guess;
	guess = -1;
	srand(time(0));
	number = rand() % 101;
	cout << "Guess a number between 0 and 100: ";
	cin >> guess;
	while (guess != number){
		if (guess > number){
			cout << "Lower: ";
			cin >> guess;
		}
		else if (guess < number){
			cout << "Higher: ";
			cin >> guess;
		}
	}
	cout << "Correct, the number was " << number << "." << endl;

	getchar();
	return 0;
}

