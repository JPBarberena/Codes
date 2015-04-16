#include <iostream>
#include <string>
using namespace std;

bool isPalindrome (string x){
  string y = x;
  reverse (x.begin(), x.end());
  if (x == y){
    return true;
  } else {
    return false;
  }
}

int main (){
  string a;

  cout << "Please enter the number to check if it's a palindrome:" << endl;
  cin >> a;
  cout << endl;
  if (isPalindrome (a) == true){
    cout << "This number is a Palindrome!" << endl;
  } else {
    cout << "This number is not a Palindrome!" << endl;
  }
  return 0;
}
