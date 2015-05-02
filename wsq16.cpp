#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main (){
  string line;
  double city;
  string cityString;
  double highway;
  string highwayString;
  double price;
  string priceString;
  double MPG_C = 0.0;
  double MPG_H = 0.0;
  double P = 0.0;
  int count = 0;
  double Average_C = 0.0;
  double Average_H = 0.0;
  double Average_P = 0.0;

  ifstream myfile;
  myfile.open ("93cars.dat.txt");
  if (myfile.good() == true){
    while (getline (myfile, line)){
      if ((count % 2) == 0){
        cityString = line.substr (52,3);
        city = stod (cityString);
        MPG_C += city;
        highwayString = line.substr (55,3);
        highway = stod (highwayString);
        MPG_H += highway;
        priceString = line.substr (42,3);
        price = stod (priceString);
        P += price;
      }
      count ++;
      Average_C = MPG_C / (count / 2);
      Average_H = MPG_H / (count / 2);
      Average_P = P / (count / 2);
    }
  }
  cout << "The Average MPG in city is: " << Average_C << endl;
  cout << "The Average MPG in highway is: " << Average_H << endl;
  cout << "The Average midrange price is (Thousands): " << Average_P << endl;
  return 0;
}
