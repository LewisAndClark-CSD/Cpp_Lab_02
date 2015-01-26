// Lab02_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <time.h>
using namespace std;

int main()
{
	int flip;
	int total;
	int heads;
	int tails;
	heads = 0;
	tails = 0;
	total = 0;
	srand(time(0));
	while (total != 100) {
		flip = 3;
		flip = rand() % 2;
		if (flip == 0){
			heads = heads + 1;
			total = total + 1;
		}
		else if (flip == 1){
			tails = tails + 1;
			total = total + 1;
		}
	}
	cout << "Heads " << heads << endl;
	cout << "Tails " << tails;
	getchar();
	return 0;
}
