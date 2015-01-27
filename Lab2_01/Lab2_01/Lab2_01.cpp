// Lab2_01.cpp : Flips a coin 100 times and reports # of heads and tails.
//Author: Thomas Morrissey
//Date: 1-23-2015


#include "stdafx.h"
#include <iostream>
#include <string>
#include <time.h>
using namespace std;


int main()
{
	int CoinFlip = 0; 
	int Heads = 0; 
	int Tails = 0;
	int Number =  0;
	srand(time(NULL));
	while (CoinFlip <= 99){
		Number = rand() % 2;
		if (Number == 1){
			Heads++; }
		else{
			Tails++;}
		CoinFlip++;}
	cout << "The Results of the coin toss is " << Heads << " heads and " << Tails << " tails.";
	getchar();
	return 0;
}

