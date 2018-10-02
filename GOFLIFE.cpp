// CPP program to create an empty vector 
// and one by one push values. 
#include <bits/stdc++.h> 
#include <iostream>
#include <string>
using namespace std; 

void addtoVec (string inp,vector<char>& transf){
	 
		
	for (size_t i = 0 ; i < inp.length(); i++ ){
		transf.push_back(inp[i]);
	}
	
	

}
int main() 
{ 

string uinput; 
vector<vector<char>> mainVec;
vector<char> store; 


getline(cin >> uinput);

for (size_t k = 0 ; k <= uinput.length() ; k++ ){
	getline(cin >> uinput);
	addtovec(uinput,store);
	mainVec.push_back(store);
	store.clear();	
}


  
for ( size_t j = 0 ; j < mainVec.size(); j++){
	cout<<mainVec[j]<<"\n";
} 
    
    
    
     return 0; 
}
