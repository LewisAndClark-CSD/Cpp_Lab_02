

#include "stdafx.h"
#include <iostream>
#include <string>
#include <time.h>


   using namespace std;


int main(){
	
	int coinToss = 0;
	int coin = 0;
	int heads = 0;
	int tails = 0;
	srand(time(NULL));
	
		while (coinToss < 100){
		coin = rand() % 2;
		if (coin == 1){
			heads++;
		}
		else{
			tails++;
		}
		coinToss++;
	}
	cout << "Result: " << endl;
	cout << heads << " heads and " << tails << " tails." << endl;
	
		getchar();
	return 0;
	
}