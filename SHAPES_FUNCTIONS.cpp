#include <iostream>
//used for universal sleep function
#include <unistd.h>
using namespace std;
/* Make a set of functions that computes the Volume of 3D shapes and then computes the Area 
of the 2D shapes */

/* NOTE: This is a well optimized program that serves a refresh of C++ since I was bored. 
   ALSO NOTE: More to come soon...
   8/24/18 */

//finds the area of a triangle
void TriArea(int base, int height){
	int Area = (base*height)*.5;
	cout<< "The area of the triangle is: "<<Area<<endl;
}
//finds the area of a square
void SquArea(int side){
	int Area = side*side;
	cout<<"The Area of the square is: "<<Area<<endl;	
}
//find the are of a rectangle
void RecArea(int length, int width){
	int Area = length*width; 
	cout<<"The Area of the rectangle is: "<<Area<<endl;
}
//find the area of a circle
void CircArea(int r ){
	float pi = 3.14159265359;
	float RadSq =r*r;
	float Area = pi*RadSq;
	
	cout<<"The Area of the circle would be: "<<Area<<endl;
}
//test
int main(int argc, char const *argv[]){
 //array containing options	
 string shapes[] = {"TRIANGLE","SQUARE","RECTANGLE","CIRCLE"};
//shape selection
int shapeSelec = 0;
//determines whether or not user wants to keep using the program
bool continu = true;


//sets default values of shape dimensions
int base, side, length, width, r;


//warm welcome
cout<<"Hello, welcome to the useless area finder! "<<endl;
	sleep(1);
while (continu==true){
//stores if user wants to keep using program or not
	string option = "Y";	
	cout<<"What would you like to compute?"<<endl<<endl;
	cout<<"SELECT : "<<endl<<endl;
	int count = 1;
	for (int i=0; i<4 ; i++){
		sleep(1);
		cout<<count<<" --- "<<"Area of "<<shapes[i]<<endl;
		count++;	
	}
	//selection of desired shape 
	cin>>shapeSelec;
	//resets counter
	
	//storing the shape dimensions
	int base,height;
	int side;
	int length,width;
	int radius;
	//what to do if an option is selected
	switch (shapeSelec){
		case 1: {
			cout<<"BASE MEASUREMENT"<<endl;
			cin >> base;
			cout<<"HEIGHT MEASUREMENT"<<endl;
			cin >> height;
			TriArea(base,height);	
			break;
		}
		case 2:{
			cout<<"SIDE MEASUREMENT"<<endl;
			cin >> side;
			SquArea(side);	
			break;
		}
		case 3:{
			cout<<"LENGTH MEASUREMENT"<<endl;
			cin >>length;
			cout<<"WIDTH MEASUREMENT"<<endl;
			cin >>width;
			RecArea(length,width);
			break;
		}
		case 4:{
			cout<<"RADIUS MEASUREMENT"<<endl;
			cin>>radius;
			CircArea(radius);
			break;
		}
		default:{
			cout<<"ENTER ONE OF THE OPTIONS LISTED ABOVE!"<<endl;
			break;
		}
				
		
	}
	//checks to see if user still wants to use the program
	cout<<"Would you like to compute another shape? (Y / N)"<<endl;
	cin>>option;
	if (option == "N" || option =="n"){
	continu = false;
}	
}
cout<<"Thank you for using this haha"<<endl;
		
}
