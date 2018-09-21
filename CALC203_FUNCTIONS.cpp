#include <iostream>
#include <vector>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <ostream>
using namespace std;
/* Make a function that computes the vector's magnitude based on it's components 
   then make a function that calculates the dotproduct of 2 vectors
   S: 9/20/18
   E: ... */




//function that removes parenthesis and spaces and stores numbers in a vector
void vecEdit(string& uinput, vector<int>& vecs){
	 //stores string element to be checked
	char check;
	for (size_t i = 0 ; i<=uinput.length(); i++){
		check = uinput[i];
		if ((int)check < 44 ){
		uinput.erase(i,1);
		}
	}
	
	
	bool isDigit = false;
	string transf;
	for (size_t j = 0 ; j<=uinput.length(); j++){
		check = uinput[j];
		if ((int)check >= 48 ){
		isDigit = true;
		transf+=check;
		}
		if(((int)check < 48) && (isDigit = true)){
		
		
		}			
	}	
	
	
}








//Find the Magnitude of the vector 
size_t vecCalc(vector<int> calc){
	
}
//END vecCalc



int main(int argc, char const *argv[])
{
//Does user want to keep finding magnitude of vector? 
bool findMag = true;
vector<int>components;	
while (findMag == true){
	  vector<int> myVec;
	  string uinput; 
	  cout<<"Please enter the components of the vector in the format: \n\t (X,Y,Z)\n";
	  getline(cin,uinput);
	  
	  
	
		
		
		
	}
	
	
	
	
	return 0;
}
