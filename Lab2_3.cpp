// Lab2_3.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main()
{
	int dice = 0;
	int randNum = 0;
	int diceTotal = 0;
	int sides = 0;
	int numDice = 0;
	int modifier = 0;
	int total = 0;

	cout << "Welcome to Die Roller" << endl;
	cout << "Instructions: " << endl;
	cout << "To roll type the number of dice, then the number" << endl;
	cout << "Like this: 3 6-1" << endl;
	cout << "That would mean" << endl;
	cout << "Roll 3 6-sided dice, and subtract 1 from each die" << endl;
	cout << "To exit, enter: 1 1 1" << endl;
	cout << "ENJOY! ******************************************" << endl;

	cout << "Your Roll: ";
	cin >> numDice;
	cin >> sides;
	cin >> modifier;
	dice = rand() % sides + 1;
	cout << sides << endl;
	cout << dice;

	getchar();
	getchar();
	return 0;
}

