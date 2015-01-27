// Lab2_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int _tmain(){
	//Initialize and declare
	int count = 0; //Counter
	int heads = 0, tails = 0; // heads and tails counter

	srand(time(NULL));

	while (count < 100){
		int flip = rand() % 2;
		if (flip == 1){
			++heads;
			cout << "You flipped a heads! " << endl;
		}
		else{
			++tails;
			cout << "You flipped a tails! " << endl;
		}
		++count;
	}
	cout << endl;
	cout << "You flipped " << heads << " heads and " << tails << " tails!";

	getchar();
	return 0;
}

