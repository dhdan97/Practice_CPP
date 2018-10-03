#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std; 
/*
Make a program that simulates a dive game between you and the computer 
S: 10/3/18
*/
void checkPlay(const string inp,bool& ans){
	bool validReply = false;
	//while loop that checks for valid input and returns the correct boolean
	while (validReply == false){
		if ((inp == "NO") || (inp == "N")){
		ans = false;
		validReply = true;
		}
		if ((inp == "YES") || (inp == "Y")) {
		ans = true;
		validReply = true;
		}		
	}
	
}






//function to turn every element within a string to uppercase
string to_upper(string &upper){
	for(int i = 0 ; i<=upper.length();i++){
		upper[i] = toupper(upper[i]);
	}
	return upper;	
}

	

void rollDice(size_t& d1, size_t& d2, size_t& dsum){
	srand((unsigned)time(NULL));
	d1 = rand()%6;
	d2 = rand()%6;
	dsum = d1 + d2;
}
	
	
	





int main(int argc, char const *argv[]){
//variables holding the values of each dice and computing the total of each dice
size_t dice1, dice2, diceSum;
//records the user's response 
string response;
//boolean that determines if user wants to keep rolling 
bool keepRolling = true;

//program while loop
while (keepRolling == true){

//checks to see if user wants to play 	
printf("%s\n","LET'S ROLL SOME DICE,\n ARE YOU IN?");
cin>> response;
to_upper(response);
checkPlay(response,keepRolling);






	
	
	
	
}

	
	
}
