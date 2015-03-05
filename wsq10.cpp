#include <iostream>
#include <vector>
#include <stdio.h>
#include <math.h>
using namespace std;

vector<float> vec (s);
float a;
float x;
float m;
float y;
int i;
int s;

  float sum (vector<float> vec){
    for (i=0; i<s; i++){
      x += vec [i];
    }
    return x;
  }

  float ave (vector<float> vec){
    y = x/s;
    return y;
  }

  float dev (vector<float> vec){
    for (i=0; i<s; i++){
      m += (vec [i]-y)*(vec[i]-y);
    }
    float z = sqrt(m/s);
    return z;
  }

int main (){

  cout << "Please enter the number of values you want in the list." << endl;
  cin >> s;

  cout << "Please enter the values (one per line)." << endl;
  for (i=0; i<s; i++){
  cin >> a;
  vec.push_back(a);
  }

  float total = sum (vec);
  float average = ave (vec);
  float sdev = dev (vec);

  cout << "Total: " << total << endl;
  cout << "Average: " << average << endl;
  cout << "Standard Deviation: " << sdev << endl;
  return 0;
}
