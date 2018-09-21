#include <iostream>
#include <sstream> //For istringstream
#include <vector>
#include <math.h>
using namespace std;
/* Make a function that computes the vector's magnitude based on it's components. 
   Then make a function that calculates the dot product of 2 vectors
   NOTE: will try to make vecEdit into a recursive function.
   S: 9/20/18
   E: ... 
*/

//Function that removes parenthesis and spaces and stores numbers in a vector.
void vecEdit(string& uinput, vector<int>& vecs){
//Stores string element that will be evaluated.
char check;
	for (size_t i = 0 ; i<=uinput.length(); i++){
		check = uinput[i];
		if ((int)check < 44 ){
		uinput.erase(i,1);
		}
	}
	
//Checks if string has a valid digit.
bool isDigit = false;
//String to hold digit(s) of a number.
string hold;
//Transfers number/Digit to vector "vecs".
int transf;
	for (size_t j = 0 ; j<=uinput.length() ; j++){
		check = uinput[j];
		if ((int)check >= 48 ){
		isDigit = true;
		hold+=check;
		}
		if(((int)check < 48) && (isDigit = true)){
		/*NOTE: istringstream turns a STRING digit/number "hold" to INT digit/number "transf" 
		which can be pushed to vector "vecs".
		*/
		istringstream tuns(hold);
		tuns >> transf;
		vecs.push_back(transf);
		hold.clear();
		isDigit = false;
		}			
	}		
}
//END vecEdit. 


//Find the Magnitude of the vector WOP.
int vecCalc(vector<int> calc){
	
}
//END vecCalc.


int main(int argc, char const *argv[])
{
//Does user want to keep finding the magnitude of a vector with components x,y,z? 
bool findMag = true;
//Stores user's input for the "vecEdit" function.
string uinput;
//Stores the components in this vector for the "vecCalc" function.
vector<int>components;
	
while (findMag == true){
	  cout<<"\tPlease enter the components of the vector in the format: \n\t\t (X,Y,Z)\n";
	  getline(cin,uinput);
	  
	}
	
	return 0;
}
