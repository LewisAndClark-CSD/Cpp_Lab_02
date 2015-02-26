// Jacob Steinier
// 1/23/15
// lab2_3

/*pesudocode
allow user to enter the number of dice, the modifier, and the number of sides of their dice
print out the random dice
if all values are 1
say thanks and exit*/
#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "* WELCOME to *" << endl
		<< "* Die-Roller! *" << endl
		<< "*" << endl
		<< "Instructions: *" << endl
		<< "To roll, type the number of dice, then the number *" << endl
		<< "of sides then any modifiers, all separated by *" << endl
		<< "spaces *" << endl
		<< "*" << endl
		<< "like this: 3 6 -1 *" << endl
		<< "that would mean: *" << endl
		<< "Roll 3 6-sided dice, and subtract 1 from each die *" << endl
		<< "*" << endl
		<< "To exit, enter: 1 1 1 *" << endl
		<< "ENJOY! * *******************************************************" << endl;

	int dice = 0, side = 0, modifier = 0, stopper = 0;
		while (stopper == 0)
	{
		cout << "\nYour Roll: ";
		cin >> dice >> side >> modifier;
		if (dice == 1 & side == 1 & modifier == 1){
			stopper = 1;
			cout << "Thank you, have a nice day!" << endl;
		}
		else{
		for (double i = dice; i > 0; i--){
			double v1 = rand() % side + 1;
			cout << v1 + modifier << " ";
		}
		}
	}
	getchar();
	getchar();
	return 0;
}

