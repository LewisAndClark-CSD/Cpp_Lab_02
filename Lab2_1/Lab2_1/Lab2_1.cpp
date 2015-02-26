// Lab2_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	srand(time(NULL));
	int i = 0;
	int heads = 0;
	int tails = 0;

	for (i = 0; i < 100; i++)
		{
			int x = rand() % (2);
			if (x == 0)
			{
				heads++;
			}
			else if (x == 1)
			{
				tails++;
			}
		}
	cout << "Tails: " << tails << endl;
	cout << "Heads: " << heads << endl;
	cin.ignore();

	return 0;
}

