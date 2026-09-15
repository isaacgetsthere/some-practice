#include <cmath>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    //1
	cout << pow(10,6) << endl;

	//2
	int angstromsPerMeter;
	angstromsPerMeter = pow(10,10);
	cout << angstromsPerMeter << endl;
	
	//3
	string worseName = "isaac";
	string betterName = "newton";

	cout << worseName.length() << endl;
	cout << betterName.length() << endl;

	//4
	double milk = 5.5;
	double sugar = 8.5;
	double sumVariables = milk + sugar;

	cout << fixed << setprecision(2) << endl;
	cout << sumVariables << endl;
}
