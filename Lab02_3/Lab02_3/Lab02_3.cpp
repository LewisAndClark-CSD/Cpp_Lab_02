// Lab02_3.cpp : 
// Andrew Hecky | 01-23-2015
/*********************************************************************
* 3. Create a simple die rolling app. Below is a sample of how the   *
*	 program should run.                                             *
*********************************************************************/


#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	// Initial Values
	int numDice = 0, sideDice = 0, diceMod = 0;

	// Program Open
	cout << "*********************************************************" << endl;
	cout << "*   WELCOME to                                          *" << endl;
	cout << "*         Die - Roller!                                 *" << endl;
	cout << "*                                                       *" << endl;
	cout << "* Instructions:                                         *" << endl;
	cout << "*  To roll, type the number of dice, then the number    *" << endl;
	cout << "*  of sides then any modifiers, all separated by        *" << endl;
	cout << "*  spaces.                                              *" << endl;
	cout << "*                                                       *" << endl;
	cout << "*  like this : 3 6 -1                                   *" << endl;
	cout << "*  that would mean :                                    *" << endl;
	cout << "*   Roll 3 6 - sided dice, and subtract 1 from each die *" << endl;
	cout << "*                                                       *" << endl;
	cout << "*  To exit, enter : 1 1 1                               *" << endl;
	cout << "*  ENJOY!                                               *" << endl;
	cout << "*********************************************************" << endl;

	cout << "Roll Info: ";
	// User Inputs Roll Info
	cin >> numDice >> sideDice >> diceMod;
	cin.sync();

	//Roll Loop
	while (numDice != 1 || sideDice != 1 || diceMod != 1)
	{
		for (; numDice;){ cout << die;  }
		cout << "in loop";
		
	}

	cout << "out of loop";
	getchar();
	return 0;
}

