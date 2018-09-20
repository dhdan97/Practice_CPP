#include <iostream>
#include<cstdlib>
#include<time.h>
#include <string>
using namespace std;
/* The purpose of this program is to provide the user a random password that can consist of numbers, letters (UPPERCASE and LOWERCASE)
and symbols */
/*Works so far... Needs some optimization
8/26/18*/

//Function that capitalizes everything in a string
string to_upper(string &upper){
	for(int i = 0 ; i<=upper.length();i++){
		upper[i] = toupper(upper[i]);
	}
	return upper;	
}

int main(int argc, char const *argv[]){
srand(time(0));
bool newPass = true;


while (newPass == true){
int length =0; //stores the user's length for password
int option =0; //stores the user's option for password
int passI =0; // stores int from num rand()
char passC=' '; // converts passI to a char
string response = "NO"; //response for the endde 

cout<<"Enter the length of your desired password"<<endl;
	
	while (!(cin >> length)) {
    	cout << "Please enter a valid length" << endl;
    	cin.clear();
    	cin.ignore(10000,'\n');
  	}	

cout<<" Please choose an option:"<<endl<<endl;
cout<<"	1 ------ any character"<<endl<<endl;
cout<<"	2 ------ lowercase and numbers"<<endl<<endl;
cout<<"	3 ------ UPPERCASE and numbers"<<endl;

	while (!(cin >> option)) {
    	cout << "Please enter an valid option" << endl;
    	cin.clear();
    	cin.ignore(10000,'\n');
  	}		

cout<<"Your new password is: \n\n";

switch(option){
	case 1:{
	for(size_t i =0 ; i<length;i++){
	passI = rand() % 33+93;
	passC= (char)passI;
	cout<<passC;
	}	
		break;
	}
	case 2:{
	for(size_t k = 0 ; k<length ; k++){
	anotherONE:passI = rand() % 48+74;
		if(passI>=58 && passI<=96){
		goto anotherONE;
		}

		if(passI >=48 && passI<=57){
		passC= (char)passI;
		cout<<passC;
		}
		if (passI >=97 && passI<=122){
		passC= (char)passI;
		cout<<passC;
		}
	}	
		break;
	}
	case 3:{
	for(size_t j =0 ; j<length;j++){
	tryagain:passI = rand() % 48+42;
	
		if(passI>=58 && passI<=64){
		goto tryagain;
		}

		if(passI >=48 && passI<=57){
		passC= (char)passI;
		cout<<passC;
		}
		if (passI >=65 && passI<=90){
		passC= (char)passI;
		cout<<passC;
		}
	}
		break;
	}
	default:{
		cout<<"Something went wrong :("<<endl;
		break;
	}
}
cout <<"\n\nWould you like to generate another password?"<<endl;
cin>>response;
to_upper(response);
cout<<response<<endl;

if (response == "NO" || response == "N"){	
	newPass = false;
}
	
}
cout<<"See you next time......."<<endl;
system("pause");
return 0;

}
