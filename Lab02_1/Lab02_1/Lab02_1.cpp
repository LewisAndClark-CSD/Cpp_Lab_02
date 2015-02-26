// Matt Jones Lab02_01 100 flips wiht random distribution
#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(void)
{
	srand (time(NULL));

	int coin = rand() % 2;
	int heads = 0;
	int tails = 0;
	for (int flips = 100; flips--;)
	{
		coin = rand() % 2;
		if (coin == 0)
		{
			++heads;
		}
		else
			{
			++tails;
			}
		
	}
	cout << heads << "Heads" << endl << tails << "Tails" << endl;
	cin.ignore();
	cout << "Press the enter key to exit.";
	getchar();
	return 0;
}

