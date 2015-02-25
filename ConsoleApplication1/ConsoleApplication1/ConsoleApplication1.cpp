// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

int heads = 0, tails = 0, cointoss;
int flip();
int main()
{
	for (int counter = 1; counter <= 10; counter++)
	{
		for (int count = 1; count <= 10; count++)
			flip();
		cout << endl;
	}

	cout << endl;
	cout << "Heads =  " << heads << endl;
	cout << "Tails =  " << tails << endl;

	return 0;
