/**************************
* Cpp_Lab_02              *
* Author: Alton Stillwell *
* Challenge 1             *
***************************
* Prompt the user to start*
* then have a random num. *
* (0 or 1) generated and  *
* set to 'coin', increase *
* count by 1. Do this 100 *
* times, then display the *
* results of each side    *
**************************/
#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
	int count = 0;
	int heads = 0;
	int tails = 0;
	int coin = 0;
	srand(time(NULL));
	while (count < 100){
		coin = rand() % 2;
		if (coin == 0){
			tails += 1;
		}
		else if (coin == 1){
			heads += 1;
		}
		count += 1;
	}
	cout << "Tails: " << tails << endl;
	cout << "Heads: " << heads << endl;
	cin.ignore();
	return 0;
}

