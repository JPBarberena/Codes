#include <iostream>
using namespace std;

int main () {

  string a;
  do{
    int n;
      cout << "Please enter a positive integer" << endl;
        cin >> n;
      while (n<0){
        cout << "Please enter a valid number" << endl;
          cin >> n;
      }

    int f=1;
      for (int i=1; i<=n; i++){
        f = i*f;
      }

      cout << "The factorial of that number is " << f << endl;

      cout << "Would you like to try again (yes/no)?" << endl;
        cin >> a;
      while (a != "yes" && a != "no"){
        cout << "Please enter a valid word" << endl;
          cin >> a;
      }
  }while (a == "yes");
      cout << "OK. Have a nice day!" << endl;
  return 0;
}
