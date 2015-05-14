// Lab2_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>
using namespace std;


int main(){
	//variables
	int dice = 0;
	int randNum = 0;
	int diceTotal = 0;
	int sides = 0;
	int numDice = 0;
	int modifier = 0;
	int total = 0;
	srand(time(NULL));
	//instructions
	cout << "Welcome to Die Roller!\n" << endl;
	cout << "Instructions: " << endl;
	cout << "To roll, type the number of dice, then the number\n of sides then any modifiers, all separated by\n spaces. \n" << endl;
	cout << "like this: 3 6 -1" << endl;
	cout << "that would mean: " << endl;
	cout << "Roll 3 6-sided dice, and subtract 1 from each die\n" << endl;
	cout << "To exit enter: 1 1 1" << endl;
	cout << "ENJOY! *******************************************\n" << endl;

	cout << "Your Roll: ";
	cin >> numDice;
	cin >> sides;
	cin >> modifier;
	dice = rand() % sides  + 1;
	

	 
	

	getchar();
	getchar();
	return 0;
}

