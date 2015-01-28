// ConsoleApplication18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}
#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std;
int main(){
	int tries, number, guess;
	tries = 1;
	guess = 0;
	cout << "Welcome to 'Guess My Number'!" << endl;
	cout << "I'm thinking of a number between 1 and 100." << endl;
	cout << "Try to guess it in as few attempts as possible." << endl;
	cout << "Take a guess: ";
	cin >> guess;
	srand(time(0));
	number = rand() % 100 + 1;
	while (guess != number){
		if (guess > number){
			cout << "Lower..." << endl;
		}
		else if (guess < number){
			cout << "Higher..." << endl;
		}
		cout << "Take a guess: ";
		cin >> guess;
		tries++;
	}
	cout << "You guessed it! The number was " << number << endl;
	cout << "And it only took you " << tries << " tries!" << endl;
	system("pause");
	return 0;

}




