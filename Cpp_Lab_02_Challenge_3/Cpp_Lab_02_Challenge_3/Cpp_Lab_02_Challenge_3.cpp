// Cpp_Lab_02_Challenge_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int rollDice();

int main()
{
	int NumberOfRolls;
	int Rolls[6];
	int DiceRoll;
	int NumSides;
	int Modifiers;

	srand((unsigned)time(0));

	cout << "Your Roll: ";
	cin >> NumberOfRolls;

	cout << "Your number of sides: ";
	cin >> NumSides;

	cout << "Your Modifiers: ";
	cin >> Modifiers;

	if (NumberOfRolls = 0)
		cout << "Rolls are 0" << endl;
	else if (NumberOfRolls = 1)
		cout << "Rolls are 1" << endl;
	else if (NumberOfRolls = 2)
		cout << "Rolls are 2" << endl;
	else if (NumberOfRolls = 3)
		cout << "Rolls are 3" << endl;
	else if (NumberOfRolls = 4)
		cout << "Rolls are 4" << endl;
	else if (NumberOfRolls = 5)
		cout << "Rolls are 5" << endl;
	else if (NumberOfRolls = 6)
		cout << "Rolls are 6" << endl;

	if (NumSides = 0)
		cout << "Number of sides are 0" << endl;
	else if (NumSides = 1)
		cout << "Number of sides are 1" << endl;
	else if (NumSides = 2)
		cout << "Number of sides are 2" << endl;
	else if (NumSides = 3)
		cout << "Number of sides are 3" << endl;
	else if (NumSides = 4)
		cout << "Number of sides are 4" << endl;
	else if (NumSides = 5)
		cout << "Number of sides are 5" << endl;
	else if (NumSides = 6)
		cout << "Number of sides are 6" << endl;

	if (Modifiers = 0)
		cout << "Modifiers are 0" << endl;
	else if (Modifiers = 1)
		cout << "Modifiers are 1" << endl;
	else if (Modifiers = 2)
		cout << "Modifiers are 2" << endl;
	else if (Modifiers = 3)
		cout << "Modifiers are 3" << endl;
	else if (Modifiers = 4)
		cout << "Modifiers are 4" << endl;
	else if (Modifiers = 5)
		cout << "Modifiers are 5" << endl;
	else if (Modifiers = 6)
		cout << "Modifiers are 6" << endl;

	cout << "The Total is: " << NumberOfRolls + NumSides + Modifiers << endl;
	getchar();
}

