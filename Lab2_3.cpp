/**************************
* Cpp_Lab2_3              *
* Author: Alton Stillwell *
* Date: 1/27/15           *
**************************/
#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sstream>
using namespace std;
int main()
{
	// Intro text
	cout << "Welcome to the" << endl;
	cout << "Super Amazing Die-Roller!" << endl << endl;
	cout << "Instructions:" << endl;
	cout << "To roll, type the number of dice, then the number" << endl;
	cout << "of sides then any modifiers, all separated by spaces." << endl;
	cout << "Example: 3 6 -1" << endl;
	cout << "Which means:" << endl;
	cout << "Roll 3 6-sided dice, and subtract 1 from each die" << endl << endl;
	cout << "To exit, enter 1 at the side setter. Ie: 4 1 5" << endl << endl;
	cout << "*****************************************" << endl << endl;
	//Initilize variables
	int numDice = 0; //will carry the number of dice
	int numSide = 0;//will carry the number of sides the dice has
	int mod = 0;//will hold a modifier to either add or subtract from the actuall roll
	int choice[3] = { 0, 0, 0 };//initilize the array
	srand(time(NULL));
	//Game Loop
	cout << "Enter values: ";
	for (int i = 0; i < 3; i++){
		cin >> choice[i];
	}
	while (choice[1] != 1){
		numDice = choice[0];
		numSide = choice[1];
		mod = choice[2];
		cout << "Roll " << numDice << "-" << numSide << " sided dice, with a modifier of " << mod << "." << endl;
		cout << "Results: ";
		for (numDice; numDice > 0; numDice--){
			cout << (rand() % numSide + mod + 1) << " ";
		}
		cout << endl << endl;
		cout << "Enter values: ";
		for (int i = 0; i < 3; i++){
			cin >> choice[i];
		}
	}
	//Ending Text
	cout << endl << endl;
	cout << "Press <enter> to exit";
	cin.ignore();
	cin.ignore();
	return 0;
}