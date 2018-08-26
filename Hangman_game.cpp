#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <string>

/* There are a few errors that still must be fixed. Will troubleshoot in the future.
8/26/18*/
using namespace std; 

void printProg(vector<char> P){
	for(int i = 0 ; i<P.size();i++){
		cout<<" "<<P[i];
	}
	cout<<"\n";
}
void printGuess(vector<char> G){
for (int k = 0 ; k <G.size(); k++){
	cout<<G[k];
	}
	cout<<"\n";	
}


void checkInput(const string ans , const char compare,vector<char>& prog,vector <char>& guess){
bool similar = false;
for (int j = 0 ; j < prog.size();j++){
	if (compare == ans[j]){
	prog[j]=compare;
	similar = true;
		}
	
	}
	
	if (similar ==false){
	guess.push_back(compare);
	return;
	}

}


int main(int argc, char const *argv[])
{
	//for random element chosen 
	srand(time(0));
							
	//picking the word using a vector 
	vector<string> word; 
	//vector for user guesses 
	vector<char> Guess; 
	
	word.push_back("cow");
	word.push_back("pig");
	word.push_back("horse");
	word.push_back("chicken");
	//randomly chosen number for element of vector
	int pick  = rand()%word.size()-1;
	//assigns string in vector to answer 
	string ANS = word[pick];
	//vector used to display user's progress 
	vector<char> Prog;
	for (int i = 0 ; i <ANS.length();i++){
	Prog.push_back('_');
	}



	
	//boolean for while loop
	bool isfound = false; 
	bool same = true;
	char uinp;
	
	cout<<" I am thinking of an animal that belongs on a farm"<<endl;
	while (isfound ==false){
		cout<<" Guess a letter "<<endl;
		printProg(Prog);
		

		cin >> uinp;
		checkInput(ANS,uinp,Prog,Guess);

		cout<<"These are your current guesses"<<endl;
		printGuess(Guess);


		for (int l = 0 ; l<ANS.length();l++){
		if (Prog[l]!=ANS[l]){
		same = false;
			}
		}

		if (same ==true){
		cout<<"You guessed the word!"<<endl;
		isfound = true;
		}


		

	}
	
	
	

	
	
	



	
	return 0;
}
