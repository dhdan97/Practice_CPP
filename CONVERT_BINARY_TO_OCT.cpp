#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;
/* Make a program that converts binary to decimal, octal , hex , etc...
Practice Program for CSC 21200
8/30/18 */


// first function works assuming that that inputlength % 3 == 0


//function that converts binary to octal. 


string isLegit(){
	//checks to see if the user's input is acceptable
		string uinput; 
		bool isLegit = false;	
		while (isLegit == false){
		cout<<"PLEASE ENTER A BINARY NUMBER TO CONVERT"<<endl;
		cin >> uinput;
			for (int j  = 0 ; j <uinput.length(); j++){
				if ((uinput[j] == '0') || (uinput[j] == '1')){
				isLegit = true;	
				}
				else isLegit = false;
				}
		}
		return uinput;
}
// end function



// function that modifies the input by adding ISG to make accurate computations 

void fixSize(vector<char>& fix_vec){
	//amount to shift the vector to add in ISG 
	int vecMod = (fix_vec.size()-1)%3;
	int shift = 3 - vecMod;
	if (vecMod != 0){
		
	}
	

	

	
	
}
// end fixSize function




void converBIN(vector<char> check){

	//counter that checkes every 3 digits
	int Count = 0;
	//sum that gets pushed into octAns
	int Sum = 0;
	// values stored for 3 digit binary
	int Value[]  = {4,2,1};
	
	// FINAL VALUE IN OCT
	vector <int> octAns;
	//check where in binary it is weighted
	for (int i  = 0 ;  i <check.size(); i++){
			if ((check[i]=='1') && (Count < 3)){
				Sum+=Value[Count];
			}
		//counter resets every 3 digits
			if (Count < 3){
				Count++;
			}
			if (Count == 3){
			octAns.push_back(Sum);
			Sum = 0;
			Count = 0;
			}
		}
		
	//print out final value 
	for (int j = 0 ; j<octAns.size();j++){
		cout<<octAns[j]<<endl;
	}
	
}
//end converBIN


int main(int argc, char const *argv[])
{
/*vector used to store the user's binary input along with an 
 */
vector <char> binary_num;

//Records user's binary into a string
string ans; 

//Records the user's answer whether they want to commit or not. 
string decide = "Yes";
//boolean to determine if user wants to keep keep using the program 
bool keepConverting  = true; 

//BEGIN: program loop 
while(keepConverting == true){
	
// Loop that checks for valid user input 	
ans = isLegit();
	
//takes the user input and stores it in a vector
for (int i  = 0 ; i <ans.length(); i++){
	binary_num.push_back(ans[i]);
}

 /////****fixSize(binary_num);
 converBIN(binary_num);

//Asks to see if the user wants to keep using the program
//if not, the program will terminate itself by switching the bool keep convering to "false"
	cout<<"WOULD YOU LIKE TO CONVERT ANOTHER BINARY NUMBER ?  ( Y / N )"<<endl;
	cin >> decide;
	if ((decide == "n")||
	 	(decide == "no")|| 
	 	(decide == "No")|| 
		(decide == "NO")||
		(decide == "N")){
		keepConverting = false;
	}
	else {
		keepConverting = true;
	}
}

cout<<"THANK YOU FOR USING MY PROGRAM  :D"<<endl;

	return 0;
}
