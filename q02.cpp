#include <iostream>
using namespace std;

long superpower (long x, long y){
  long z = x;

  if (y == 0){
    z = 1;
  } else {
    for (int i = 1; i < y; i++){
      z = z * x;
    }
  }
    
  return z;
}

int main (){
  long a;
  long b;

  cout << "Please enter the base number:" << endl;
  cin >> a;
  cout << "Now enter the power:" << endl;
  cin >> b;
  cout << endl;
  cout << "That number raised to that power equals: " << superpower (a, b) << endl;
  return 0;
}
