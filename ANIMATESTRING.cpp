#include<iostream>
#include <string>
#include <thread>         // std::this_thread::sleep_for  --- SLEEP TIMER
#include <chrono>         // std::chrono::seconds    --- SLEEP TIMER
#include <vector>
using namespace std; 

/* Write a program that takes a string and prints it to the console one by one
S: 10/4/18
E: 10/4/18 */

//function for delay
void waitFor(int timeWait){
this_thread::sleep_for(chrono::milliseconds(timeWait));
}//END "waitFor"

//animation function that takes in a string and a delay in float milliseconds
void aniStr(const string str,const float sec){
//conversion from float ms to int ms
int delay = sec*1000;
	for(int i = 0 ; i<str.length();i++){
		if (i!=str.length()){
		cout<<str[i];
		waitFor(delay);
		}
	}
	cout<<str[str.length()]<<"\n";	
}//END "aniStr"


int main(){
//TESTIG	
string tString;
vector<string> phrase;
phrase.push_back("Hey");
phrase.push_back("How are you?");
phrase.push_back("Everything fine?");
phrase.push_back("I");
phrase.push_back("have");
phrase.push_back("to");
phrase.push_back("go");

for (size_t i = 0 ; i <phrase.size();i++){
	tString = phrase[i];
	aniStr(tString,1);
}

cout<<"SUCCESS!\n";

	return 0;
}//END "int main"

