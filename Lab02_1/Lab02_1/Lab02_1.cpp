// Lab02_2.cpp : 
// Andrew Hecky | 01-23-2015
/*********************************************************************
* 1. Write a program that flips a coin 100 times and then tells you  *
*    the number of heads and tails.                                  *
*********************************************************************/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	//Initial Values
	int headCount = 0, tailCount = 0, flipCount = 0;
	string cfCar;

	//Program Open
	cout << "Press enter to start flipping the coin. ";
	getchar();
	srand(time(NULL));
	cout << endl;
	
	//Coin Flip Loop
	while (flipCount < 100)
	{

		int coinFace = rand() % 2; // Flipping Coin
		
		flipCount = flipCount + 1; // Addding to Flip Count

		// If Coin Lands on Heads
		if (coinFace == 1)
		{
		headCount = headCount + 1;
		cfCar = "Heads";
		} 

		// If Coin Lands on Tails
		else
		{
			tailCount = tailCount + 1;
			cfCar = "Tails";
		}
		cout << "The " << flipCount << " flip landed on, " << cfCar << "!" << endl;
	}
	
	//Program Close
	cout << endl;
	cout << endl;
	cout << "We have flipped the coin 100 times. " << "Here Are The Results! " << endl;
	cout << "- The Coin landed on Heads, " << headCount << " times! " << endl;
	cout << "- The Coin landed on Tails, " << tailCount << " times! " << endl;
	cout << endl;
	cout << endl;
	cout << "<press enter to exit the program> ";
	getchar();
	return 0;
}

