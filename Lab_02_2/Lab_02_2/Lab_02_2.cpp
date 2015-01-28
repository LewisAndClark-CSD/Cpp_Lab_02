#include "stdafx.h"
#include<iostream>
#include<string>
#include <stdlib.h>
#include <ctime>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	srand(time(NULL));

	int tries = 0;
	int num1;
	int UpLim = 100;
	int LowLim = 1;
	int num2;

	cout << "\tWelcome to Guess My Number\n\n";
	cout << "in this version, the computer tries to guess YOUR number\n\n\n";

	cout << "Enter a number: ";
	cin >> num1;

	do
	{
		num2 = rand() % (UpLim - LowLim) + LowLim;

		cout << "\nComputer's guess: ";
		cout << num2;
		++tries;

		getchar();

		if (num1 > num2)
		{
			cout << "\nYou're too low!\n";
			LowLim = num2 + 1;
		}
		else if (num1 < num2)
		{
			cout << "\nToo high!\n";
			UpLim = num2 - 1;
		}
		else if (num1 == num2)
		{
			cout << "\nYou got my number, You're the man!\n\nYou guessed the number in just " << tries << " tries!";
		}

	} while (num1 != num2);

	getchar();
	return 0;
}
