// lab2_3.cpp
// Jason Nguyen
// 1/23/15

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "********************************************************" << endl;
	cout << "*    Welcome to                                        *" << endl;
	cout << "*        Die -Roller!                                  *" << endl;
	cout << "*                                                      *" << endl;
	cout << "* Instructions:                                        *" << endl;
	cout << "* To roll, type the number of dice, then the number    *" << endl;
	cout << "* of sides then any modifiers, all seperated by        *" << endl;
	cout << "* spaces.                                              *" << endl;
	cout << "*                                                      *" << endl;
	cout << "* like this: 3 6 -1                                    *" << endl;
	cout << "* that would mean:                                     *" << endl;
	cout << "* Roll 3 6-sided dice, and subtract 1 from each die    *" << endl;
	cout << "*                                                      *" << endl;
	cout << "* To exit, enter: 1 1 1                                *" << endl;
	cout << "* ENJOY!                                               *" << endl;
	cout << "********************************************************" << endl;
	
	int roll = 0;
	int sides = 0;
	int modifier = 0;
	int num = 0;
	srand((unsigned)time(0));

	while (roll != 1 && sides != 1 && modifier != 1){
		cout << endl << "Your roll: ";
		cin >> roll >> sides >> modifier;

		cout << "Results: ";
		for (int i = 0; i >= roll; ++i){
			num = (rand() % sides) + 1;
			cout << num;
		}
	}

	return 0;
}

