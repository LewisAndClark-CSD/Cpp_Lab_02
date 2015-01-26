// Lab02_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <time.h>
using namespace std;


int main()
{
	int dice=0;
	int side=0;
	int mod=0;
	int count;
	int total;
	int roll;
	bool again = true;
	
	srand(time(0));
	cout << "WELCOME to" << endl << "Die-Roller!" << endl << endl;
	cout << "Instructions: " << endl << "To roll, type the number of dice, then the number" << endl << "of sides then any modifiers, all seperated by" << endl << "spaces." << endl << endl;
	cout << "Like this : 3 6 -1" << endl << "That would mean" << endl << "Roll 3 6-sided dice, and subtract 1 from each die" << endl << endl;
	cout << "To exit enter 1 1 1" << endl << "ENJOY!" << endl;
	while (again==true){
		cin >> dice >> side >> mod;
		total = 0;
		count = 0;
		if (dice == 1 && side == 1 && mod == 1){
			again = false;
		}
		cout << dice << side << mod << endl;
		cout << "Results: ";
		while (count != dice){
			count = count + 1;
			roll = rand() % side + 1 + mod;
			cout << roll << " ";
			total += roll;
			
		}
		cout << endl << "Total: " << total << endl;
	}
	getchar();
	return 0;
}

