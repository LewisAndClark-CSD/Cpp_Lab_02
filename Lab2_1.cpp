// Jacob Steiner=
// 1/23/15
// lab2_1

/*
Pseudocode
flip a coin 100 times and print the user the number of heads
*/

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	srand(time(NULL));
	int heads = 0;
	int tails = 0;
	int flip;
	for (int i = 0; i < 100; i++){
		
		flip = rand() % 2;
		if (flip == 0){
			tails++;
		}
		else {
			heads++;
		}
		
	}
	
	cout << "heads: " << heads << endl;
	cout << "tails: " << tails;
	getchar();
	getchar();
	return 0;
}

