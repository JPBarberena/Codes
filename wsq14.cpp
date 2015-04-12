#include <iostream>
#include <string>
#include <cmath>
using namespace std;

double factorial (float n){
    if (n == 0.0){
      return 1;
    } else {
      return n * factorial (n-1);
    }
}

double trunc (float x, int p){
  string a = to_string (x);
  a = a.substr (0, p + 2);
  x = stod (a);
  return x;
}

double calculate_e (int precision){
  double e = 0;
  double last;

  if (precision == 0){
    return 2;
  } else {
    for (double i = 0.0; i < 100.0; i++){
      last = e;
      e = e + (1 / factorial (i));
      e = trunc (e, precision);
      if (e == last){
        break;    //Used to exit the loop after copmaring the new value of e to the last one
      }
    }
  }
  return e;
}

int main (){
  int x;

  cout << "Please enter the number of decimals you want to know:" << endl;
  cin >> x;
  cout << endl;
  cout << "The Euler's Number up to that decimal place is: " << calculate_e (x) << endl;
  return 0;
}
