// ConsoleApplication17.cpp : Defines the entry point for the console application.
//

/*Program: Coin Flip 
Date: January 23, 2015
Author: Brianna Melius, with modification by: Zachary Micheal Joseph Anthony Golik and Brandon McCurry
*/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(){
	int coin, heads, tails, counter;
	heads = 0;
	tails = 0;
	counter = 0;
	srand(time(NULL));
	while (counter != 100){
		coin = rand() % 2;

		if (coin == 0){
			heads++;
		}
		else if (coin == 1){
			tails++;
		}
		counter++;
	}
	cout << "You flipped heads: " << heads << " times!" << endl;
	cout << "You flipped tails: " << tails << " times!" << endl;
	getchar();
	return 0;
}
