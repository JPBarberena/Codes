#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
using namespace std;

void readNumbersFromFile (string filename){
  string line;
  int number;
  int numLines = 0;
  float total = 0.0;
  float average = 0.0;
  float mean = 0.0;
  float sdev = 0.0;
  vector <int> num;

  ifstream myfile;
  myfile.open (filename);
  if (myfile.good() == true){
    while (getline (myfile,line)){
      numLines++;
      number = stoi (line);
      num.push_back (number);
      total += number;
      average = total / numLines;
    }
    for (int i = 0; i < num.size (); i++){
      mean += pow ((num[i] - average), 2);
    }
    sdev = sqrt (mean / (numLines - 1));

    cout << "Number of values: " << numLines << endl;
    cout << "Total: " << total << endl;
    cout << "Average: " << average << endl;
    cout << "Standard Deviation: " << sdev << endl;
  }
}

int main (){
  string name;

  cout << "Enter the name of the file you want to analyze:" << endl;
  cin >> name;
  cout << endl;
  readNumbersFromFile (name);
  return 0;
}
