// jacob steiner
// 1/23/15
// lab2_2

/*Pseudocode
generate a number 1 - 100
have the user guess a number
tell the user if he or she is greater than or less than
if number is right, tell user how many tries it took them
*/

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	double guess;
	double tries = 0; 
	double number;
	cout << "I am thinking of a number 1 - 100, what is it?\n";
	srand(time(NULL));
	number = rand() % 100 + 1;
	cin >> guess;
	while (guess != number) {
		tries++;
		if (guess > number){
			cout << "Lower\n";
		}
		if (guess < number){
			cout << "higher\n";
		}
		cin >> guess;
	}
	cout << "good, it only took you " << tries << " tries!";
	getchar();
	return 0;
}

