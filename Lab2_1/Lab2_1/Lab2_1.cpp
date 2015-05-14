// Lab2_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

/*****************************************************************
Made by: Tyler Kapusniak										  -
Made on: 1/23/15												  -
******************************************************************/

int main()
{
	/*variables!*/
	srand(time(0));
	int count = 0;
	int HeadsOrTails = rand() % 2;
	int Heads = 0;
	int Tails = 0;
	/*while loop!*/
	while (count != 100) {
		int HeadsOrTails = rand() % 2;
		if (HeadsOrTails == 0) {
			Heads++;
		}
		else{
			Tails++;
		}
		count++;
	}
	cout << "You got " << Heads << " flips that landed on Heads!" << endl;
	cout << "And also " << Tails << " flips that landed on Tails!" << endl;

	getchar();
	return 0;
}

