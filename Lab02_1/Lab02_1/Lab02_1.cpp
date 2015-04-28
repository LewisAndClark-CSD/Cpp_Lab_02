// Lab02_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int main();
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
	return 0;
}

