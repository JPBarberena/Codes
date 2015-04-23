#include <iostream>
#include <vector>
using namespace std;

int dotProduct (vector <int> v1, vector <int> v2){
  int total = 0;
  for (int i = 0; i < v1.size (); i++){
    total += (v1 [i] * v2 [i]);
  }
  return total;
}

int main (){
  vector <int> list1;
  vector <int> list2;
  int x;
  int y;
  int size1;
  int size2;

  cout << "Please enter the values for the first list one by one. When you're done, type 0" << endl;
  do{
    cin >> x;
    list1.push_back (x);
  } while (x != 0);
  size1 = list1.size ();

  cout << "Now enter the values for the second list one by one. When you're done, type 0 again. Make sure you enter the same amount of values you entered in the first list!!" << endl;
  do{
    cin >> y;
    list2.push_back (y);
  } while (y != 0);
  size2 = list2.size ();

  cout << endl;
  if (size1 != size2){
    cout << "Error: These lists are not the same size!" << endl;
    cout << "-1" << endl;
  } else {
    cout << "The dot product of these lists is: " << dotProduct (list1, list2) << endl;
  }


return 0;
}
