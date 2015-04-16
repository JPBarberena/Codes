#include <iostream>
using namespace std;

long fibonacci (long n){
  long x = 0;
  long y = 1;
  long z;

  if (n == 0){
    return x;
  } else if (n == 1){
    return y;
  } else {
    for (int i = 0; i < n -1; i++){
      z = x + y;
      x = y;
      y = z;
    }
  }

  return z;
}

int main (){
  long x;

  cout << "Please enter the number of the Fibonacci sequence's value you want to know:" << endl;
  cin >> x;
  cout << endl;
  cout << "The Fibonacci sequence in that value is: " << fibonacci (x) << endl;
  return 0;
}
