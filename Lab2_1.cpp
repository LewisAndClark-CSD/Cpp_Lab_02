/****************
* Lab2_1.cpp     *
* By: Zach Golik *
* Date: 1/23/15  *
 ****************/

#include "stdafx.h"
#include <iostream> 
#include <string>
#include <stdio.h>
#include <stdlib.h> //rand, srand//
#include <time.h>
using namespace std;

int main(){
	cout << "I am going to flip a coin 100 times"<< endl <<
		    "Then I will tell you how many heads and how many tails I got." << endl;
	int i = 0, heads = 0, tails = 0, flip = 0; //Initializing: heads, tails, i(count), flip(random number)//
	srand(time(NULL)); //srand//
	while (i != 100){ //WHILE LOOP//
		flip = rand() % 2; //Random number//
		if (flip == 0){
			heads += 1;
		}
		else if (flip == 1){
			tails += 1;
		}
		i += 1;
	}
	cout << "Heads: " << heads << endl;
	cout << "Tails: " << tails << endl;
	system("pause");
	return 0;
}

