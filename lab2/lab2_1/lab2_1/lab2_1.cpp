// lab2_1.cpp
// Jason Nguyen
// 1/23/15

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	srand((unsigned)time(0));
	int heads = 0;
	int tails = 0;
	int coin;
	for (int i = 0; i < 100; ++i){
		coin = (rand() % 2);
		if (coin == 0){
			++heads;
		}
		else{
			++tails;
		}
	}
	cout << "Heads: " << heads << endl;
	cout << "Tails: " << tails << endl;
	cin.ignore();

	return 0;
}

