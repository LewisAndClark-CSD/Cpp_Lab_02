// ConsoleApplication20.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main(){
	cout << "*******************************************************" << endl <<
		"*   WELCOME to                                        *" << endl <<
		"*         Die - Roller!                               *" << endl <<
		"*                                                     *" << endl <<
		"* Instructions:                                       *" << endl <<
		"*  To roll, type the number of dice, then the number  *" << endl <<
		"*  of sides then any modifiers, all separated by      *" << endl <<
		"*  spaces.                                            *" << endl <<
		"*                                                     *" << endl <<
		"*  like this : 3 6 - 1                                *" << endl <<
		"*  that would mean :                                  *" << endl <<
		"* Roll 3 6 - sided dice, and subtract 1 from each die *" << endl <<
		"*                                                     *" << endl <<
		"*  To exit, enter : 1 1 1                             *" << endl <<
		"*  ENJOY!                                             *" << endl <<
		"*******************************************************" << endl;
	cout << "Your Roll: ";
	int rollArray[3] = { 0, 0, 0 }, diceNum = 0, sideNum = 0, modifiers = 0, results = 0, total = 0;
	for (int i = 0; i < 3; i++){
		cin >> rollArray[i];
	}
	diceNum = rollArray[0];
	sideNum = rollArray[1];
	modifiers = rollArray[2];
	srand(time(NULL));
	while (diceNum != 1, || sideNum != 1, || modifiers != 1){
		for (int i = 0; i < diceNum; i++){
			total += ((rand() % sideNum + 1;) + modifiers);
		}
		cout << "Total: " << total;
		cout << "Your Roll: ";
		int rollArray[3] = { 0, 0, 0 }, diceNum = 0, sideNum = 0, modifiers = 0, results = 0, total = 0;
		for (int i = 0; i < 3; i++){
			cin >> rollArray[i];
		}
		diceNum = rollArray[0];
		sideNum = rollArray[1];
		modifiers = rollArray[2];
		getchar();
	}
	cout << "Thank you, Have a nice day.";
	getchar();
	getchar();
}

