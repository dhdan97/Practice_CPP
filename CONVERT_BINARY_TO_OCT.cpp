#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
/*Started on: 8/29/18 : INCOMPLETE
* This small program tanslates a BINARY NUMBER of r = 2 into OCTAL number wher r = 8
* This is done by grouping the binary number into sets of 3
*/

//function that converts binary to decimal 
void converBIN(vector<int> &check){

}

int main(int argc, char const *argv[])
{
/*vector used to store the user's binary input along with an 
empty vector to store the integer version */
vector <int> binary_num;

//Records user's binary into a string
string ans; 
//Records user's binary into an int
int ans1; 
//Records the user's answer whether they want to commit or not. 
string decide = "Yes";
//boolean to determine if user wants to keep keep using the program 
bool keepConverting  = true; 

//program loop 
while(keepConverting == true){
	cout<<"PLEASE ENTER A BINARY NUMBER TO CONVERT"<<endl;
	cin >> ans;
	//stringstream *NEW*
	stringstream tuns(ans);
	tuns >> ans1;

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
