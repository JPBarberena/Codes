#include <iostream>
using namespace std;

int gcd (int x, int y){
  if (x == y){
    return x;
  } else if (x > y){
      return gcd (x - y, y);
  } else {
      return gcd (x, y - x);
  }
  return 0;
}

int main (){
  int a;
  int b;

  cout << "Please enter the biggest number:" << endl;
  cin >> a;
  cout << "Now enter the lowest number: " << endl;
  cin >> b;
  cout << endl;
  cout << endl;
  cout << "The Greatest Common Divisor of these numbers is: " << endl;
  cout << gcd (a,b) << endl;
  return 0;
}
