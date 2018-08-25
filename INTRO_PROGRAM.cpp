#include <iostream>
#include <unistd.h>
using namespace std; 
/** 
The purpose of program is to create a nice swirl based on the user's input length 
The function " printGraphic1" is what does all the work.
**/

//function to print out swirl graphic 
void printGraphic1(size_t Slength){

for (size_t i = 0; i<Slength; i++){
if (i%2 ==0){
cout<<"            0"<<endl;
sleep(1);
cout<<"        0"<<endl;
sleep(1);
cout<<"    0"<<endl;
sleep(1);
cout<<"0"<<endl;
sleep(1);
cout<<"0"<<endl;
}
else{
cout<<"0"<<endl;
sleep(1);
cout<<"    0"<<endl;
sleep(1);
cout<<"        0"<<endl;
sleep(1);
cout<<"            0"<<endl;
sleep(1);
cout<<"                0"<<endl;
cout<<"                0"<<endl;
	}			
}

	}

//beginning of int main 
int main(int argc, char const *argv[])
{
	size_t Slength =0;
	cout<<"Enter the length of the swirl"<<endl;
	cin >> Slength;
	printGraphic1(Slength);
	return 0;
}
