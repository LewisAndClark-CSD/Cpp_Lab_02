// Lab2_2.cpp : Recreate guess my number in C++
//Author: Thomas Morrissey
//Date: 1-23-2015


#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>
using namespace std;


int main()
{
	cout << "Welcome to Guess my Number!" << endl;
	cout << "I'm think of a number between 1 and 100." << endl;
	cout << "Try to guess it in as few attempts as possible." << endl;
	int Number = 0; 
	int Guess = 0; 
	int Attempts = 0;
	srand(time(NULL));
	Number = rand() % 100 + 1;
	while (Number != Guess){
		cout << "What is your guess: ";
		cin >> Guess;
		if (Number > Guess){
			cout << "Higher" << endl;
		}
		else if (Number < Guess){
			cout << "Lower" << endl;
		}
		else{
			cout << "You got it!" << endl;
		}
	}
	cout << "Press <Enter> to Exit." << endl;
	getchar();
	getchar();
	return 0;
}

