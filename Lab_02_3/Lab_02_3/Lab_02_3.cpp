#include "stdafx.h"
#include<iostream>
#include<string>
#include <stdlib.h>
#include <time.h>

using namespace std; 

int main(){
	cout << "\nWELCOME to\nDie-Roller!\n\nIntructions:\nTo roll, type the number of dice, then the number\nof sides then any modifiers, all seperated by\nspaces.\n\nlike this: 3 6 -1\nthat woul mean:\nRoll 3 5-sided dice, and subtract 1 from each die\n\nTo exit, enter: 111\nEnjoy! * *******************************\n";
	string ExitWord = "";
	string YourRoll = "";
	int NumberOfDices = 0;
	int SideNumber = 0;
	int Modifier = 0;
	
	cout << "Your Roll: ";

	while (ExitWord != "1 1 1"){

		cin >> YourRoll;
		if (YourRoll == ExitWord){
			cout << "Press <Enter> to Exit." << endl;
			getchar();}
		else{
			NumberOfDices = YourRoll[0];
			cout << NumberOfDices;
		}

	}

	getchar(); //pause the screen.
	return 0;
}
