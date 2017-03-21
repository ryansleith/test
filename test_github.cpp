//Ryan Sleith 14277382 
//Matthew Kitch 14262318
//159.234 Assignment
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

class Info {

public:
  Info();
  ~Info();
  void printfile(char * file_name);


private:
};

Info::Info(){

}

Info::~Info(){

}

void Info::printfile(char * file_name){
  ifstream input;
  string line;
  input.open(file_name);
  if(!input.good()){
      cout << "Cannot open file " << file_name << endl;
      exit(0);
  }

  while(input >> line){
    cout<<line<< endl;
  }
}

int main( int argc, char** argv ) {
	if(argc!=3) {printf("needs two files \n"); exit(0);}
  Info info = Info();
  //argv[1] = students.txt. argv[2] = courses.txt.
  info.printfile(argv[1]);
}
