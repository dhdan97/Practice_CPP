#include <vector> 
#include <iostream>
#include <string>
using namespace std; 

/*GAME OF LIFE REMASTERED
S: 10/2/18
*/


//function that stores the element of string into a vector
void addtoStor(string inp,vector<char>& transf){
	for (size_t i = 0 ; i <=inp.length(); i++ ){
		transf.push_back(inp[i]);
	}	
}//END "addtoStore"


int main(int argc, char const *argv[])
{
//string to store user input 
string uinput; 
//main vector of vectors
vector<vector<char> > mainVec;
//vector used to push back into mainVec
vector<char> store; 
//keeps record of store vector and its size 
size_t storeSz;
//DEBUGGING


//takes first iteration as reference
	while (getline(cin,uinput)){
	addtoStor(uinput,store);
	mainVec.push_back(store);
	
//stores the size of the store vector before clearing 
	storeSz = store.size();
//clears store vector
	store.clear();
    }

//DEBUGGING
	cout<<"NEXT ITERATION\n";
//prints out stored iteration	
	for (size_t j = 0 ; j < mainVec.size(); j++){
	for (size_t l = 0 ; l < storeSz; l++){
		cout<<mainVec[j][l];
		}	
        cout<<"\n";
	} 


return 0;


}
