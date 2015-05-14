// Lab2_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

/**********************************
Created by: Tyler Kapusniak		   -
Created on: 1/25/15				   -
**********************************/

int main()
{
	srand(time(0));
	/*Variables!*/
	int NumbOfDie = NULL;
	int SideOfDie = NULL;
	int Roll = NULL;
	int Mod = NULL;
	int Total = 0;

	cout << "WELCOME to *" << endl << "Die -Roller! *" << endl << "*" << endl << "Instructions: *" << endl << "To roll, type the number, of dice, then the number*" << endl << "of sides then any modifieers, all seperated by *" << endl << "spaces *" << endl << "*" << endl << "like this: 3 6 -1 *" << endl << "that would mean: *" << "roll 3 6-sided dice, and subtract 1 from each die *" << endl << "*" << endl << "To exit, enter: 1 1 1 *" << endl << "ENJOY * ****************";
	cout << "Please type the number of die! ";
	cin >> NumbOfDie;
	cout << "Please type the number of sides on each die! ";
	cin >> SideOfDie;
	cout << "Add or subtract what number from the Die rolls? (positive for addition, negative for subtraction) ";
	cin >> AddOrSubtract;
	while (NumbOfDie != 1 || SideOfDie != 1 || Roll != 1)
	{
		for (int i = 0; i < NumbOfDie; i++)
		{
			Roll = (rand) % SideOfDie + 1;
			Total = Total + Roll;
		}

		
	}
		
	return 0;
}

