//Program: Lab01_4.cpp
//Author: Luke Gosnell
//Date: 1/23/2015
//This program flips 100 coins, then tells the user how many heads and tails it flipped.


#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()

{
	string heads = "Heads";
	string tails = "Tails";
	int number = 0;
	int headsNum = 0;
	int tailsNum = 0;
	srand(time(0));
	cout << "Press enter to flip the coin!";
	getchar();

	while (headsNum + tailsNum < 100) {
		number = rand() % 2 + 1;
		if (number == 1){
			cout << heads;
			headsNum++;
			cout << headsNum << endl;
		}
		else if (number == 2){
			cout << tails;
			tailsNum++;
			cout << tailsNum << endl;
		}
	}
	cout << "Flipped " << headsNum << " heads and " << tailsNum << " tails.";
	getchar();
	return 0;
}

