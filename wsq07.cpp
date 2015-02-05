#include <iostream>
using namespace std;

int main ()
{
  int a;
  int b;

  do{
    cout << "Please enter the lower bound." << endl;
    cin >> a;
    cout << "Now enter the upper bound." << endl;
    cin >> b;
    if (a>b){
      cout << "Error: Please enter the bounds in the correct order." << endl;
      }
  }
  while (a>b);
  int sum=0;
  for (int i=a; i <= b; i++)
    {
      sum= sum+i;
    }
  cout << "The sum of all the numbers in that range is " << sum << endl;
  return 0;
}
