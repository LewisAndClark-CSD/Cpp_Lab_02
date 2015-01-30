// Lab2_3.cpp : Defines the entry point for the console application.
//
/************************************
* Lab2_3.cpp                        *
* Author: Sam Coon                  *
* Help: Zach Golik, Brandon         *
* Date: 1/27/15                     *
************************************/
#include "stdafx.h"
#include <iostream>
#include "stdlib.h"
#include "time.h"
using namespace std;
int main()
{
	int dice = 0;
	int type = 0;
	int mod = 0;
	int totalRoll = 0;

	cout << "\tWelcome to Die-Roller!" << endl;
	cout << "Instructions:" << endl;
	cout << "To roll, type the number of dice, then the number\n" << endl;
	cout << "of sides then any modifiers, all seperated by spaces." << endl;
	cout << "like this: 3 6 -1" << endl;
	cout << "that would mean:" << endl;
	cout << "Roll 3 6-sided dice, and subtract 1 from each die" << endl;
	cout << "To exit, enter: 1 1 1" << endl;
	cout << "ENJOY!" << endl;

	int roll = 0;
	int exit = 0;
	char dieRoller[3];

	for (int i = 0; i < 3; i++){
		dieRoller[i] = 0;
	}
	cout << "Roll the dice: ";
	cin >> dice;
	cin >> type;
	cin >> mod;

		cout << dice;
		
		srand(time(NULL));
		while (dice != 1 || type != 1 || mod != 1){
			totalRoll = 0;
			for (int i = 0; i < dice; i++){
				totalRoll += ((rand() % type + 1) + mod);
			}
			cout << "The roll total was " << totalRoll << "." << endl;
			cout << "Roll the dice: ";
			cin >> dice;
			cin >> type;
			cin >> mod;

		}
	cout << "Thank you, Have a nice day.";

	getchar();
	getchar();
	return 0;
}

