#include <iostream>
using namespace std;

void triangle (int size){
  string a;
  for (int i = 1; i <= size; i++){
    a = a + "T";
    cout << a << endl;
  }
  for (int i = size - 1; i >= 1; i--){
    a = a.substr (0, i);
    cout << a << endl;
  }
}

int main (){
  int x;

  cout << "Please enter the height of the triangle you want to draw: " << endl;
  cin >> x;
  cout << endl;
  cout << endl;
  triangle (x);
  return 0;
}
