// Lab2_03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>


using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "*******************************************************" << endl;
	cout << "*   WELCOME to                                        *" << endl;
	cout << "*   Die - Roller!                                     *" << endl;
	cout << "*                                                     *" << endl;
	cout << "* Instructions:                                       *" << endl;
	cout << "*  To roll, type the number of dice, then the number  *" << endl;
	cout << "*  of sides then any modifiers, all separated by      *" << endl;
	cout << "*  spaces.                                            *" << endl;
	cout << "*                                                     *" << endl;
	cout << "*  like this : 3 6 - 1                                *" << endl;
	cout << "*  that would mean :                                  *" << endl;
	cout << "* Roll 3 6 - sided dice, and subtract 1 from each die *" << endl;
	cout << "*                                                     *" << endl;
	cout << "*  To exit, enter : 1 1 1                             *" << endl;
	cout << "*  ENJOY!                                             *" << endl;
	cout << "*******************************************************" << endl;
	
	srand(time(NULL));
	int dice, sides, modifier = 0;
	int i;
	int total;
	cout << "Your roll: ";
	cin >> dice >> sides >> modifier;

	while (dice != 1 && sides != 1 && modifier != 1)
	{
		for (i = dice; i > 0; i--;)
		{

		}

	}

	return 0;
}

