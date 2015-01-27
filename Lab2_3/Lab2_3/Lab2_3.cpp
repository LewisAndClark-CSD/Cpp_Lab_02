//Program: Lab2_3.cpp
//Author: Luke Gosnell
//Date: 1/23/2015
//This program allows the user to enter the number of dice, sides, and a modifier. the program tells the user the total of what they rolled.
#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()

{
	cout << "WELCOME to " << endl;
	cout << "Die -Roller!" << endl;
	cout << "*" << endl;
	cout << "Instructions: *" << endl;
	cout << "To roll, type the number of dice, then the number *" << endl;
	cout << "of sides then any modifiers, all separated by *" << endl;
	cout << "spaces. *" << endl;
	cout << "*" << endl;
	cout << "like this: 3 6 -1 *" << endl;
	cout << "that would mean: *" << endl;
	cout << "Roll 3 6-sided dice, and subtract 1 from each die *" << endl;
	cout << "*" << endl;
	cout << "To exit, enter: 1 1 1 *" << endl;
	cout << "ENJOY! * *******************************************************" << endl;
	cout << endl;
	//_____________________________________________________________________________________
	
	srand(time(0));
	int dieNum = 0;
	int dieSide = 0;
	int dieMod = 0;
	int sideRoll = 0;
	int roll = 0;
	int TotalRoll = 0;

	while (TotalRoll != 3){
		cout << "Your Roll: ";
		cin >> dieNum >> dieSide >> dieMod;
		TotalRoll = dieNum + dieSide + dieMod;
		if (TotalRoll > 3); {
			for (int count = 0; count < dieNum; count++){
				sideRoll = rand() % dieSide + 1;

				roll = roll+ (sideRoll + dieMod);}
			cout << "You rolled " << dieNum << " " << dieSide << "-sided dice. " << dieMod << " was modified for each roll." << endl;
			cout << "Total roll: " << TotalRoll << endl;
		}
	}
	

	getchar();
	return 0;
}

