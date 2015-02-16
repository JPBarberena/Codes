#include <iostream>
using namespace std;

void Plus (int a, int b) {
    cout << a+b << endl;
}

void Substract (int a, int b) {
    cout << a-b << endl;
}

void Product (int a, int b) {
    cout << a*b << endl;
}

void Division (int a, int b) {
    cout << a/b << endl;
}

void Remainder (int a, int b) {
    cout << a%b << endl;
}


int main ()
{
  int a;
  int b;
  cout << "Please enter one number" << endl;
  cin >> a;
  cout << "Please enter another number" << endl;
  cin >> b;
  cout << "The sum, difference, product, division and remainder of these numbers are: " << endl;
  Plus (a,b);
  Substract (a,b);
  Product (a,b);
  Division (a,b);
  Remainder (a,b);
  return 0;

}
