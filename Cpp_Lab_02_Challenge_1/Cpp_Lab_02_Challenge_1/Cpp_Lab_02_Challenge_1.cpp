// Cpp_Lab_02_Challenge_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

#include<iostream>
#include<cstdlib>
using namespace std;

int flip();

int main()
{

	int coin, counter, tails = 0, heads = 0;
	for (counter = 1; counter <= 100; counter++)
	{
		coin = flip();

		if (coin == 0)
		{
			tails = tails + 1;
		}
		else if (coin == 1)
		{
			heads = heads + 1;
		}

	}

	cout << endl;
	cout << "The amount of tails produced is: " << tails << " Times" << endl;

	cout << endl;
	cout << "The amount of heads produced is: " << heads << " Times" << endl;
	cin.ignore();


}
int flip()
{
	return rand() % 2;
	getchar();
}
