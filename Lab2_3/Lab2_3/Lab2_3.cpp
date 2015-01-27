// Lab2_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <stdlib.h>


/*
*******************
*  Author: Brad   *
*  Date: 1/23/15  *
*******************
*/

using namespace std;

int _tmain(){

	//Printing
	cout << "*              WELCOME to Die -Roller!                  *" << endl;
	cout << "*********************************************************" << endl;
	cout << "*                   Instructions:                       *" << endl;
	cout << "*   To roll, type the number of dice, then the number   *" << endl;
	cout << "*     of sides then any modifiers, all separated by     *" << endl;
	cout << "*                      spaces.                          *" << endl;
	cout << "*********************************************************" << endl;
	cout << "*                  Like this: 3 6 -1                    *" << endl;
	cout << "*                   that would mean:                    *" << endl;
	cout << "*   Roll 3 6-sided dice, and subtract 1 from each die   *" << endl;
	cout << "*********************************************************" << endl;
	cout << "*                 To exit, enter: 1 1 1                 *" << endl;
	cout << "*                         ENJOY                         *" << endl;
	cout << "*********************************************************" << endl;
	cout << endl;

	bool rolldice = true;
	int quanity, sides, sub = 0, roll = 0, total = 0;

	srand(time(0));

	while (rolldice == true){
		int quanity = 0, sides = 0, sub = 0;
		cout << "Your Roll: ";
		cin >> quanity >> sides >> sub;
		cin.sync();

		if (quanity == 1 || sides == 1 || sub == 1){
			rolldice = false;
		}
		for (int i = 0; i < quanity; ++i){
			int roll = (rand() % (sides + 1) + 1) - sub;
			total = total + roll;
		}
		if (rolldice == true){
			cout << "Your roll total: " << total;
		}
		getchar();
	}
	return 0;
}

