#include <iostream>
#include <vector>
using namespace std;

//function that converts binary to decimal 
void converBIN(vector<int> &check){




}


int main(int argc, char const *argv[])
{
//vector used to store the user's binary input
vector<int> binary_num;

//stores the binary into a string
string ans; 
//Stores if user's answer if they want to continue or not
string decide = "Yes";
//boolean to determine if user wants to keep keep using the program 
bool keepConverting  = true; 


//program loop 
while(keepConverting == true){
	cout<<"PLEASE ENTER A BINARY NUMBER TO CONVERT"<<endl;
	cin >> ans;
	for (int i = 0 ; i<ans.length();i++){
		binary_num.push_back(ans[i]);
	}



//Asks to see if the user wants to keep using the program
//if not, the program will terminate itself by switching the bool keep convering to "false"
	cout<<"WOULD YOU LIKE TO CONVERT ANOTHER BINARY NUMBER ?  ( Y / N )"<<endl;
	cin >> decide;
//find a way to store answer in a map to be eligable for a switch statement 
	
	
	
	
	switch ()){
		case "no": 
			keepConverting = false;
			break;
		
		case "No": 
			keepConverting = false;
			break;
		
		case "NO": 
			keepConverting = false;
			break;
		
		case "N": 
			keepConverting = false;
			break;
		default: 
			cout<<"OK"<<endl;
			break;
	}

}

cout<<"THANK YOU FOR USING MY PROGRAM  :D"<<endl;








	return 0;
}
