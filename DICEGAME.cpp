#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds
using namespace std; 
/*
Make a program that simulates a dive game between you and the computer 
S: 10/3/18
*/

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
	//while loop that checks for valid input and returns the correct boolean
	while (validReply == false){
	 	cin >> inp;
	 	to_upper(inp);
	 	
		if ((inp == "NO") || (inp == "N")){
		ans = false;
		validReply = true;
		}
		if ((inp == "YES") || (inp == "Y")) {
		ans = true;
		validReply = true;
		}		
	}
	
}//END "checkPlay;



	
//function that simulates a dice roll
void rollDice(bool& roller){
	size_t d1, d2, dsum = 0;
	string entity;
	if(roller == false) {
		entity = "MY";
		srand((unsigned)time(NULL));
	}
	if(roller == true){
		entity = "YOUR";
		srand((unsigned)5 + (unsigned)time(NULL));
	} 

	d1 = (rand()%5)+1;
	d2 = (rand()%5+1);
	dsum = d1 + d2;
	

	cout<<entity<<" ROLL\n\n\t";
	cout<<d1<<"\t\t"<<d2<<"\n\n";
	cout<<entity<<" SCORE: "<<dsum<<"\n";
	
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
printf("%s\n","LET'S ROLL SOME DICE,\n ARE YOU IN?");

checkPlay(response,keepRolling);
	if(keepRolling == false){
	break;
	}

//computer rolls first
cout<<"I'LL ROLL FIRST \n";
this_thread::sleep_for(chrono::seconds(1));
cout<<"ROLLING ...\n";
this_thread::sleep_for(chrono::seconds(3));

rollDice(userRoll);


//then user rolls
cout<<"NOW YOU ROLL\n PRESS ENTER TO CONTINUE ROLLING\n";
cin.ignore();
cout<<"ROLLING ...\n";
this_thread::sleep_for(chrono::seconds(4));

rollDice(userRoll);


}

	
	
}
