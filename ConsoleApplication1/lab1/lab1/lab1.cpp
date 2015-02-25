// lab1.cpp : Defines the entry point for the console application.
//pope tom helped me with the while loop i am not very good at this



#include "stdafx.h"
#include <iostream>
#include <time.h>
using namespace std;

int main()

{
	int CoinToss = 0;
	int coin = 0;
	int heads = 0;
	int tails = 0;
	srand(time(NULL));

	cout << "I will flip this coin 100 times." << endl;
	cout << "I will then print the results." << endl;

	while (CoinToss < 100){
		coin = rand() % 2;
		if (coin == 1){
			heads++;}
		else{
			tails++;}
		CoinToss++;
	}
	cout << "The Results are!" << endl;
	cout << heads << " heads and " << tails << "tails." << endl;
	cout << "Press <Enter> to exit!";
	getchar();
	return 0;
}