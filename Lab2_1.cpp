// Challenge 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main()
{
	int heads = 0;
	int tails = 0;
	int flip = 1;
	unsigned int side;
	srand(time(0));
	unsigned int coin;
	coin = rand() % 2;
	do{
		side = rand() % 2;
		if (side == 0)
			heads++;
		else
			tails++;
		flip++;
		} 
		while (flip <= 100);
		cout << "Tails= " << tails << endl;
		cout << "Heads= " << heads << endl;
		getchar();
		return 0;
}

