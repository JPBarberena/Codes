#include <iostream>
#include <cmath>
using namespace std;

void Space (){
  cout << endl;
  cout << endl;
}

double SQ (int a){
  double r = 10.0;
  double y;
  double z;

  do {
    y = (r + (a / r)) / 2;
    z = (y + (a / y)) / 2;
    r = z;
  } while (z != y);
  return r;
}



int main (){
  int x;

  cout << "Please enter a number to calculate the proximate square root: " << endl;
  cin >> x;
  Space ();
  cout << "The square root of that number is approximately: " << endl;
  cout << SQ (x) << endl;
  return 0;
}
