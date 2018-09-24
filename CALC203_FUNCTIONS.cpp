#include <iostream>
#include <sstream> //For istringstream
#include <vector>
#include <cmath>
using namespace std;
/* Make a function that computes the vector's magnitude based on it's components. 
   Then make a function that calculates the dot product of 2 vectors
   NOTE: will try to make vecEdit into a recursive function.
   S: 9/20/18
   E: VecCalc --- 9/24/18 
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


//Find the Magnitude of the vector NEED TO TEST.
int vecMag(vector<int> calc){
//Holds the squared of a component
int hold;
//Adds up the components
int sum; 
//Recieves the summation of the components squared.
int gTotal;
// Loop caclulating the sum of the components squared
	for (int i = 0 ; i<calc.size() ; i++){
		hold = pow(calc[i],2);
		sum+=hold;
	}
	gTotal = sqrt(sum);
	return gTotal;
}
//END vecCalc.

//Calculates the dot product of a vector
int adtb(const vector<int> a, const vector<int> b){
	
}
//END adtb


int main(int argc, char const *argv[])
{
//Does user want to keep finding the magnitude of a vector with components x,y,z? 
bool findMag = true;
//Stores user's input for the "vecEdit" function.
string uinput;
//Stores the components in this vector for the "vecCalc" function.
vector<int>components;
	
while (findMag == true){
	  cout<<"\t\tPlease enter the components of the vector in the format: \n\t\t\t\t\t (X,Y,Z)\n\t\t";
	  getline(cin,uinput);
	  vecEdit(uinput,components);
	  for (int i = 0 ; i <components.size(); i++){
	  	cout<<components[i]<<"\n";
	  }
	}
	
	return 0;
}
