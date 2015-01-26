/*******************
* Program: Lab2_1  *
* Date: 1/23/2015  *
* Author: Bo Meers *
********************/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main(){
	int count = 0;
	//int coin = NULL;
	int heads = 0;
	int tails = 0;

	srand(time(NULL));

	while (count != 100){
		int coin = rand() % 2;
		if (coin == 1){
			++count;
			++heads;
		}
		else{
			++count;
			++tails;
		}
	}
	cout << "You flipped " << heads << " heads and " << tails << " tails. " << endl;
	getchar();
	return 0;
}