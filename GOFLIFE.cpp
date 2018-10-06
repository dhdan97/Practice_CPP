#include <vector>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

/*GAME OF LIFE REMASTERED
S: 10/2/18
*/



void addtoSmall(string inp,vector<char>& small2){
	for (size_t i = 0 ; i <=inp.length(); i++ ){
		small2.push_back(inp[i]);
	}
}


//IGNORE
void outFile(const string fname,vector<vector<char> > vec){
	ofstream myfile;
	myfile.open(fname);
	for (size_t i = 0; i <vec.size(); i++){
			for (size_t j = 0 ; j<vec[i].size()-1;j++){
          myfile << vec[i][j];
        }
        myfile << endl;
		}
		myfile.close();
}



void readFile(const string readFile,vector<vector<char> > &big){
  vector<char> small;
  string Rinp;

  ifstream myfile(readFile);

  if(myfile.is_open()){
    while(getline(myfile,Rinp)){
        if(Rinp.length()==0){
          break;
          }
        addtoSmall(Rinp,small);
        big.push_back(small);
        small.clear();

      }
  myfile.close();
  }
}




int main(int argc, char const *argv[])
{

string inFile;
string ofile;
//main vector of vectors
vector<vector<char> > mainVec;


//For DEBUGGING purposes

  cout<<"Please enter the name of file you want to read\n";
  cin >> inFile;

  readFile(inFile,mainVec);


  cout<<"enter where you want to transfer\n";
  cin >> ofile;

  outFile(ofile,mainVec);


return 0;


}

