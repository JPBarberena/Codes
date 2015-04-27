#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

void check_banana (string filename){
  string line;
  int count = 0;

  ifstream myfile;
  myfile.open (filename);
  if (myfile.good() == true){
    while (getline (myfile, line)){
      transform(line.begin(),line.end(),line.begin(), ::tolower);
      if (line == "banana"){
        count ++;
      }
    }
    cout << "Number of times the word 'Banana' appears in the file: " << count << endl;
  }
}

int main (){
  string name;

  cout << "Enter the name of the file to analyze:" << endl;
  cin >> name;
  cout << endl;
  check_banana (name);
  return 0;
}
