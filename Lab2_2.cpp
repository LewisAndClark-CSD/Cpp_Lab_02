// Lab2_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	int secretNumber = rand() % 100 + 1;
	int tries = 0;
	int guess = 0;
	int youWin = 0;

	cout << "\tWelcome to Guess My Number\n\n";
	while (youWin != 1){

		
		cout << "Enter a guess: ";
		cin >> guess;
		++tries;

		if (guess > secretNumber)
		{
			cout << "Lower\n\n";
		}
		else if (guess < secretNumber)
		{
			cout << "Higher\n\n";
		}
		else
		{
			cout << "Thats it! The number was " << secretNumber;
			cout << " and it only took you. " << tries << " guesses! ";
			youWin++;}
		}
		getchar();
		getchar();
		return 0;
}