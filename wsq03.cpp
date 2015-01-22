#include <iostream>
using namespace std;

int main ()
{
	int A;
	int B;
	
	cout << "Please enter two numbers (with a space between them)..." << endl;
	cin>>A;
	cin>>B;
	
	
	
	cout << "The sum of these values is " << A + B << endl;
	cout << "The difference between these values is " << A - B << endl;
	cout << "The product of these values is " << A*B << endl;
	cout << "The division of these values is " << A/B << endl;
	cout << "The remainder of the division of these values is " << A%B << endl;
	return 0;
}