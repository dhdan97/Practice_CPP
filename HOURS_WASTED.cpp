#include <vector>
#include <iostream>
#include <cstdio>
using namespace std; 


/*	This program would tell you how many hours of your life you have spent playing video games
	9/16/18 
*/

// FUNCTION "ExPFunc"  IS FINISHED BUT COULD USE MORE WORK ...



//function that computes the time period the user has played...	
float ExPFunc () {
	//selection for user 
	 vector<string> time;
	 time.push_back("Days");
	 time.push_back("Weeks");
	 time.push_back("Months");
	 time.push_back("Years");
	 //boolean to determine while loop 
	 bool uinput = false;
	 //user specified selection
	 char charSelec = '1';
	 int Selec;
	 // how many of that specified Selec have you played? 
	 int Selec_2;
	 //user specified #hours = timeLegth 
	 float timeLength;
	 
	 
	 // RETURNS TOTAL TIME COMPUTED 
	 float totalTime;
	
	 //Displays selection & stores user's selection
	printf("%s \n ", " What best describes the amount of time you have played?\n");
	for (int i = 65 ; i < 69; i++){
		cout<<"\n"<<(char)i<<" --- "<< time[i-65]<<"?\n";	
	}
	
	//Fancy way of evaluating input and making sure it is acceptable
	while (uinput == false){
	 	cin >> charSelec;
		if ((((int)charSelec > 64) && ((int)charSelec < 69))|| 
		    (((int)charSelec > 96) && ((int)charSelec < 101))
		   ){
		    uinput = true;
			}	
	 }
	
	//making user input understandable for switch statement
	if ((int)charSelec > 96){
	Selec = (int)charSelec - 32; 	
	}
	else {
	Selec = (int)charSelec;
	}
	
	//Specify the amount ... used for computation
	cout<<"How many ?\n";
	cin >> Selec_2;
	
	//Asks for specific length
	printf("%s \n"," Approximently how many hours each day did you play ?\n");
	cin >> timeLength; 
	//Compute total time
	switch (Selec){
	case 65: 
		totalTime = Selec_2 * timeLength;
		break;
	case 66:
		totalTime = (Selec_2 * 7) * timeLength;
		break;
	case 67:
		totalTime = (Selec_2 * 31) * timeLength;
		break;	
	case 68:
		totalTime = (Selec_2 * 365) * timeLength;
		break;	
	default:
		printf("%s \n ", "Not a valid input !");
		break;	
	}
	return totalTime;
		
}
//end ExPFunc


int main(int argc, char const *argv[])
{
	//Declares valuable variables for following computations
	
	//Age of user // Amount of time played//
	float Age, ExP;

	//Stores the final amount of hours wasted 
	float wasteHour = ExPFunc();
	cout<<wasteHour<<"\n";
	                                                                                                       
	return 0;
}
