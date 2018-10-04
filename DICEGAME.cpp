#include <iostream>
#include <time.h>		   //for srand seed generator
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <thread>         // std::this_thread::sleep_for  --- SLEEP TIMER
#include <chrono>         // std::chrono::seconds    --- SLEEP TIMER
using namespace std; 
/*
Make a program that simulates a dive game between you and the computer 
S: 10/3/18 --- 95% complete
*/

//simple function that acts as a timer
void waitFor(int timeWait){
this_thread::sleep_for(chrono::seconds(timeWait));
}//END "waitFor"

//function that turns every element within a string to uppercase
string to_upper(string &upper){
	for(int i = 0 ; i<=upper.length();i++){
		upper[i] = toupper(upper[i]);
	}
return upper;	
}//END "to_upper"

//function that checks for a valid reply from the user
void checkPlay(string& inp, bool& ans){
bool validReply = false;
//while loop that makes sure that the user is passing the correct input
	while (validReply == false){
	 	cin >> inp;
	 	to_upper(inp);
	 	
		if ((inp == "NO") || (inp == "N")){
		ans = false;
		validReply = true;
		break;
		}
		if ((inp == "YES") || (inp == "Y")) {
		ans = true;
		validReply = true;
		break;
		}
	printf("%s\n","PLEASE ENTER A VALID REPLY");	
	}
}//END "checkPlay;


//function that simulates the dice roll
void rollDice(bool& roller){
//declares dice , the sum of dice, and correct pronoun
size_t d1, d2, dsum = 0;
string entity;
//adjusts to the user's correct pronoun *triggered == off 
	if(roller == false) {
		entity = "MY";
		srand((unsigned)time(NULL));
	}
	if(roller == true){
		entity = "YOUR";
		srand((unsigned)5 + (unsigned)time(NULL));
	} 
	
//stores the random "roll" for each dice 
d1 = (rand()%5)+1;
d2 = (rand()%5+1);
dsum = d1 + d2;
	
//outputs the roll results
waitFor(3);
cout<<entity<<" ROLL:\n\n\t";
waitFor(2);
cout<<d1<<"\t";
waitFor(2);
cout<<"\t"<<d2<<"\n\n";
waitFor(1);
cout<<entity<<" SCORE: "<<dsum<<"\n";
//adjust for the next roller
roller = !roller;		
} //END "rollDice"


int main(int argc, char const *argv[]){
//records the user's response 
string response;
//boolean that determines if user wants to keep rolling 
bool keepRolling = true;
//boolean that keeps track of who is rolling the dice 
bool userRoll = false;

//program while loop
	while (keepRolling == true){

//checks to see if user wants to play 
	printf("\n%s\n","LET'S ROLL SOME DICE !!! ");
	waitFor(2);	
	printf("%s\n"," ARE YOU IN? (YES or NO)");
	checkPlay(response,keepRolling);
		if(keepRolling == false){
		break;
		}	
	waitFor(1);	

//COMPUTER ROLL
	printf("%s\n","I'LL ROLL FIRST");
	waitFor(1);
	printf("%s\n","ROLLING ...");
	rollDice(userRoll);
	waitFor(1);
	printf("\n%s\n","NOW YOU ROLL");

//USER ROLL
	waitFor(2);	
	printf("\n%s","PRESS ENTER TO CONTINUE ...");
/*flushes input stream so that cin does not automatically pass the \n. Therefore it will wait for the 
user's ENTER like it should */
	cin.ignore(256,'\n'); 
	cin.get();
	waitFor(1);
	printf("\n\n%s\n","ROLLING ...");
	rollDice(userRoll);
	waitFor(2);

//WILL INCLUDE FUNCTION THAT KEEPS TRACK HOW MANY TIMES EACH PLAYER WINS

	}//END WHILE PROGRAM

}//END INTMAIN
