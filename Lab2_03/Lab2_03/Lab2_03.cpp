// Lab2_03.cpp : This application acts as a dice machine.
// Contributted with Jacob Snipes.
// Author: Thomas Morrissey
// Date: 1-23-2015


#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>
using namespace std;


int main(){
	int DiceNumber = 0;
	int DiceSide = 0;
	int Modifier = 0;
	int TotalRoll = 4;
	int Total = 0;
	cout << "WELCOME TO *" << endl;
	cout << "Die-Roller! *" << endl;
	cout << "*" << endl;
	cout << "Instructions: *" << endl;
	cout << "To roll, type the number of dice, then the number *" << endl;
	cout << "of sides then any modifiers, all seperated by *" << endl;
	cout << "spaces. *" << endl;
	cout << "*" << endl;
	cout << "like this: 3 6 -1" << endl;
	cout << "that would mean: *" << endl;
	cout << "Roll 3 6-sided dice, and subtract 1 from each die *" << endl;
	cout << "*" << endl;
	cout << "To exit, enter: 1 1 1 *" << endl;
	while (TotalRoll > 3){
		cout << "Your Roll: ";
		cin >> DiceNumber >> DiceSide >> Modifier;
		TotalRoll = DiceNumber + DiceSide + Modifier;
		if (TotalRoll > 3){
			int count = 0;
			int Dice = 0;
			srand(time(NULL));
			while (count < DiceNumber){
				count++;
				Dice = rand() % DiceSide + 1 + Modifier;
				Total = Total + Dice;
			}
			cout << "From having " << DiceSide << "-" << DiceNumber << " dice and adding" << Modifier << " from each die." << endl;
			cout << " Your total is " << Total << endl;
		}
	}
	cout << "Press <Enter> to Exit." << endl;
	getchar();
	getchar();
	return 0;
}