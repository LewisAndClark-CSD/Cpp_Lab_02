// Lab02_2.cpp : Guess my number from a python book imported into C++ code
//Matt Jones - 1/23/15
#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;


int main(void)
{
	int number = rand() % 100;
	int guess = 0;
	while (guess != number)
	{
		cout << "Guess my Number!." << endl;
		cin >> guess;
		if (guess > number){
			cout << "Lower." << endl;
		}
		else if (guess < number){
			cout << "Higher." << endl;
		}
		else if (guess == number){
			cout << "Good Job." << endl;
		}

	}

	cin.ignore();
	cout << "Press the enter key to exit.";
	getchar();
	return 0;
}