// CPP program to create an empty vector 
// and one by one push values. 
#include <bits/stdc++.h> 
#include <iostream>
using namespace std; 
  
int main() 
{ 
    
  
    // Create a vector of size n with 
    // all values as 10. 
    
   
    
    for (int i = 0; i< 61 ; i++ ){
        int n = 80;
        vector<char> vect(n, '.');
        
        for (size_t j = 0 ; j< vect.size(); j++){
        cout<<vect[j]<<" ";
         }
    cout<<"\n";
   
    }
    
     return 0; 
}
