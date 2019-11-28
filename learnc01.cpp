#include <iostream>
using namespace std;

int main()
{
	double temp;
	double convFactor;
	
	cout << "Enter Temp in Celcius: " << endl;
	
	cin >> temp;
	
	convFactor = (temp * 9/5) + 32;
	
	cout << "The temp in F is " << convFactor << endl;
}
