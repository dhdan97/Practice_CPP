#include <iostream>
#include<cstdlib>
#include<time.h>
#include <string>
using namespace std;

int main(int argc, char const *argv[]){
Newpass:
srand(time(0));

int length =0; //stores the user's length for password
int option =0; //stores the us're option for password
int passI =0; // stores int from num rand()
char passC=' '; // converts passI to a char
string response = "NO"; //response for the endde 


cout<<"Enter the length of your desired password"<<endl;
	
	while (!(cin >> length)) {
    cout << "Please enter numbers only." << endl;
    cin.clear();
    cin.ignore(10000,'\n');
  	}	

cout<<" Please choose an option:"<<endl<<endl;
cout<<"	1 ------ any character"<<endl<<endl;
cout<<"	2 ------ lowercase and numbers"<<endl<<endl;
cout<<"	3 ------ UPPERCASE and numbers"<<endl;

	while (!(cin >> option)) {
    cout << "Please enter an apropriate option" << endl;
    cin.clear();
    cin.ignore(10000,'\n');
  	}		



cout<<"Your new password is: \n\n";

if (option ==1){
	for(size_t i =0 ; i<length;i++){
	passI = rand() % 33+93;
	passC= (char)passI;
	cout<<passC;
	}
}

if(option == 2){

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

}


if (option == 3){
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

}

 
cout <<"\n\nWould you like to generate another password?"<<endl;
cin>>response; 

if (response == "YES" || response == "yes"){
	goto Newpass;
}
else{
cout<<"See you next time......."<<endl;
system("pause");
return 0;	
}




}




