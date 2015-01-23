// Lab02_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	srand(time(0));
	int result[2] = { 0, 0 };
	int num = 0;
	for (int i = 0; i < 100; i++)
	{
		num = rand() % 2;
		result[num]++;
	}
	cout << "Heads: " << result[0] << endl << "Tails: " << result[1];
	getchar();
}