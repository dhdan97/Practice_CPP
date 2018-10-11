#include <vector>
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
//function that applies the logic to each cell
size_t countNbr(size_t k, size_t l,vector<vector<bool> > &Aworld){
  //sets neighbor count to 0
  size_t count = 0;

  // if it is the first or last vector OR if it's the first element or
    // last   element of the vector
      //if it is not the first or last vector/element
      //THIS IS THE BEEF OF THE WORLD
      if ( (k != 0) && (k!= Aworld.size()-1)){
          if ((l != 0) && (l!= Aworld[k].size()-1)){
            //CHECKS TOP AND BOTTOM VECTORS and SIDE NEIGHBORS
            for (size_t c = l-1 ; c <= l + 1; c++){
              //TOP/BOTTOM VECTORS\
              if (Aworld[k-1][c] == true){
                  count++;
              }
              if (Aworld[k+1][c] == true){
                  count++;
              }
              //SIDE NEIGHBORS
              if (c !=  l){
                if(Aworld[k][c] ==true){
                  count++;
                }
                if(Aworld[k][c] ==true){
                  count++;
                }
              }
          }
        }

      return count;

  }

}






vector<vector<bool> >lifeLogic(vector<vector<bool> > world)
{
  //copy vector to apply changes...we will be looking at the original world
  vector<vector<bool> > worldC(world.size()-1,(vector<bool>(world[0].size()-1,false)));
  size_t nbrCount =0;

for (size_t i  = 0 ; i < world.size(); i++){

    //iterates through each element within the small vector
    for (size_t j = 0 ; j< world[i].size() ; j++){
        nbrCount = 0;
      nbrCount = countNbr(i,j,world);
      //APPLY README RULES for count
        if (nbrCount ==3) worldC[i][j] =true;
        if (nbrCount > 3) worldC[i][j] =false;
        if (nbrCount < 2) worldC[i][j] =false;
      }
  }

  return worldC;


  //counts neighbors AND applies logic
}

void addtoSmall(string inp,vector<bool>& small2){//takes a string and a vector to change said vector such that every char in the string is now an element of the vector UPDATE: Should now CONVERT files with '.' and '0' INTO BOOLEAN when pushing back.
    for (size_t i=0; i<=inp.length(); i++){
    if(inp[i] == '.'){
      small2.push_back(false); /* dead x_x */
    }
    if(inp[i] == '0'){
      small2.push_back(true); /* alive 8D */
    }
    }
}

void outFile(const string fname,vector<vector<bool> > vec){//Takes a string(Most likely file location) and a vector of vectors

    ofstream myfile;//Creates object myfile to be written
    myfile.open(fname);//Opens fname, which would be the file path

    for (size_t i=0; i<vec.size(); i++){
            for (size_t j=0 ; j<vec[i].size(); j++){
          myfile << vec[i][j];//Writes every char in the file chosen into a vector of vectors
        }
      myfile << endl;
        }
        myfile.close();
}

void readFile(const string readFile,vector<vector<bool> > big)//Takes a string, and a vector of vectors
{
  vector<bool> small;
  string Rinp;
  ifstream myfile(readFile);// creates and object called myfile with the file name readFile
  if(myfile.is_open()){
    while(getline(myfile,Rinp)){//While myfile is being read into string Rinp
        if(Rinp.length()==0){
          break;
          }
        addtoSmall(Rinp,small);//Takes string Rinp and vector small, and then makes small contain every char of Rinp as a element of small
        big.push_back(small);//Takes the vector we inputted and creates an element containing small(a vector of chars)
        small.clear();//clears all elements from small
      }
  myfile.close();
  }
}

int main(){
string inFile;
string ofile;
vector<vector<bool> > mainVec;//Main vector of vectors to be read and used to write to
  cout<<"Please enter the name of file you want to read\n";
  cin >> inFile;
  readFile(inFile,mainVec);
  cout<<"enter where you want to transfer\n";
  cin >> ofile;
  mainVec = lifeLogic(mainVec);
  outFile(ofile,mainVec);
return 0;
}
