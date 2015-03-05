// Lab02_2.cpp : Defines the entry point for the console application.
  
  #include "stdafx.h"
  #include <iostream>
  #include <string>
  #include <ctime>
 using namespace std;



int main(){
	int Random_Number = 0;
	int Guess = 0;
	Random_Number = rand() % 100 + 1;
	cout << "Welcome to Guess my Number!" << endl;
	cout << "This is a game where I guess a random number between 1 to 100." << endl;
	cout << "And you get to guess it!" << endl;
	while (Guess != Random_Number)
	 {
		cout << "Guess: ";
		cin >> Guess;
		if (Guess > Random_Number){
			cout << "Too High! Please Guess again!" << endl;
			
		}
		else if (Guess < Random_Number){
			cout << "Too Low! Please Guess again!" << endl;
			
		}
		else{
			cout << "You got It!" << endl;
			
		}
		}
	cout << "You got it the number was " << Random_Number << endl;
	cout << "Please press enter to exit.";
	getchar();
	getchar();
	return 0;
	
}