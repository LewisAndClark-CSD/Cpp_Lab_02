// Lab02_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{

	int main(){
		
			srand(time(NULL));
		int count = 1;
		int diceCount;
		int diceSides;
		int modifier = 0;
		int gameOver = 1;
		
			cout << "******************************************************" << endl;
		cout << "*                     WELCOME to                     *" << endl;
		cout << "*                    Die - Roller!                   *" << endl;
		cout << "*                                                    *" << endl;
		cout << "* Instructions:                                      *" << endl;
		cout << "* -To roll, type the number of dice, then the number *" << endl;
		cout << "*  of sides, then any modifiers, all separated by    *" << endl;
		cout << "*  spaces.                                           *" << endl;
		cout << "*                                                    *" << endl;
		cout << "* Like this: 3 6 -1                                  *" << endl;
		cout << "* That would mean:                                   *" << endl;
		cout << "* Roll 3 6-sided dice, and subtract 1 from each die. *" << endl;
		cout << "*                                                    *" << endl;
		cout << "* To exit, enter: 1 1 1                              *" << endl;
		cout << "*                                                    *" << endl;
		cout << "* ENJOY!                                             *" << endl;
		cout << "******************************************************" << endl << endl;
		
			while (gameOver != 0){
			int total = 0;
			
				cout << "Your Roll: ";
			cin >> diceCount >> diceSides >> modifier;
			cout << endl << endl << "Results: ";
			
				while (count != diceCount){
				int ranNum = rand() % diceSides;
				if (modifier != 0){
					ranNum = ranNum + modifier;
					
				}
				cout << ranNum << " ";
				total = total + ranNum;
				++count;
				
			}
			
				cout << "Total: " << total << endl << endl;
			
		}
		
			cout << endl << endl << "Thank you, Have a nice day.";
		
			getchar();

	return 0;
}

