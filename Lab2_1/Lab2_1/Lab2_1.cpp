// ConsoleApplication11.cpp : Defines the entry point for the console application.
//
/********************************************************
* Lab2_1                                                *
* Author: Sam Coon                                      *
* Date: 1/23/15                                         *
* Include "stdafx.h", <iostream>, "stdlib.h", "time.h"  *
* using namespace std;                                  *
* int main()                                            *
* Use srand(time(0))                                    *
* Set up variables                                      *
* Make a while loop to run the count 100 times          *
* Print out the results                                 *
********************************************************/

#include "stdafx.h"
#include <iostream>
#include "stdlib.h"
#include "time.h"
using namespace std;
int main()
{
	srand(time(0));
	int coinFlip = rand() % 2;
	int count = 0;
	int heads = 0;
	int tails = 0;

	while (count != 100){
		int coinFlip = rand() % 2;
		if (coinFlip == 0){
			heads = heads++;
		}
		else if (coinFlip == 1){
			tails = tails++;
		}
		count++;
	}

	cout << "The coin flipped 100 times and landed on heads " << heads << " times and tails " << tails << " times." << endl;

	getchar();
	return 0;
}
