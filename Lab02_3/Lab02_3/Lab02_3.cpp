// Lab02_3 die roller with modifiers.
// Made by Matt Jones 1/23/15.

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;



int main(void)
{
	srand(time(NULL));
	int total = 0;
	int rolls = 0;
	int numOfDice = 0;
	int numOfSides = 0;
	int modifier = 0;
	int roll = (rand() % numOfSides) + modifier;
	while (numOfDice != 1, numOfSides != 1, modifier != 1){
		/*all variables must be inputed with 1's to leave.*/
		cout << "How Many Dice are you rolling?" << endl;
		cin >> numOfDice;
		cout << "How many Sides are there?" << endl;
		cin >> numOfSides;
		cout << "Type a modifier if any ex(-1 or 1)";
		cin >> modifier;
		cout << roll;
		while (rolls <= numOfDice)
		{
			total = total + roll;
			++rolls;
		}
		cout << "Total: " << total << endl;
	}
	cin.ignore();
	cout << "Press the enter key to exit.";
	getchar();
	return 0;

}

