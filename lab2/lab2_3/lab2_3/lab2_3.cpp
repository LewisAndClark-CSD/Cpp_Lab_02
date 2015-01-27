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
	int total = 0;
	int roll_clone = 0;
	int to_end = 0;
	srand((unsigned)time(0));

	while (to_end == 0){
		cout << endl << "Your roll: ";
		cin >> roll >> sides >> modifier;
		if (roll == 1 && sides == 1 && modifier == 1){
			to_end == 1;
			cout << "suppose to end";
		}
		else{
			roll_clone = roll;
			while (roll_clone >= 1){
				total += (rand() % sides) + 1 + modifier;
				--roll_clone;
			}
			cout << "Rolled a " << sides << " sided die " << roll << " times for a total of " << total;
			total = 0;
		}

	}
	cout << "End of program.";
	cin.ignore();
	cin.ignore();

	return 0;
}

