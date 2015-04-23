#include <iostream>
#include <vector>
using namespace std;

int findThrees (vector <int> v1){
  int sum;
  for (int i = 0; i < v1.size (); i++){
    if ((v1 [i] % 3) == 0){
      sum += v1 [i];
    }
  }
  return sum;
}

int main (){
  int x;
  vector <int> list;
  int total;

  cout << "Please enter the values one by one. When you're done, type 1000" << endl;
  do{
    cin >> x;
    list.push_back (x);
  } while (x != 1000);

  cout << endl;
  cout << "The sum of all the numbers divisible by 3 in that list is: " << findThrees (list) << endl;

return 0;
}
