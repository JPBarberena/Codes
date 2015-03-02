#include <iostream>
using namespace std;

int Plus (int a, int b) {
  int Plus=a+b;
    return Plus;
}

int Substract (int a, int b) {
  int Substract=a+b;
    return a-b;
}

int Product (int a, int b) {
  int Product=a+b;
    return a*b;
}

int Division (int a, int b) {
  int Division=a+b;
    return a/b;
}

int Remainder (int a, int b) {
  int Remainder=a+b;
    return a%b;
}


int main ()
{
  int a;
  int b;
  cout << "Please enter one number" << endl;
  cin >> a;
  cout << "Please enter another number" << endl;
  cin >> b;
  int Sum = Plus (a,b);
  int Minus = Substract (a,b);
  int Prod = Product (a,b);
  int Div = Division (a,b);
  int Rem = Remainder (a,b);
  cout << "The sum, difference, product, division and remainder of these numbers are: " << endl;
  cout << Sum << endl;
  cout << Minus << endl;
  cout << Prod << endl;
  cout << Div << endl;
  cout << Rem << endl;
  return 0;

}
