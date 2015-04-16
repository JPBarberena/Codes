#include <iostream>
#include <string>
using namespace std;

void Triangles (int x){
  string t;
  for (int i = 0; i < x; i++){
    t = t + "T";
    cout << t << endl;
  }
  for (int j = x; j > 0; j--){
    t = t.substr (0, j);
    cout << t << endl;
  }
}

int main (){
  int a;

  cout << "Please enter the size of the triangle: " << endl;
  cin >> a;
  cout << endl;
  Triangles (a);
  return 0;
}
