#include<iostream>
using namespace std;
int main()
{
	float C;
	cout << "Enter Celsius temperature : ";
	cin >> C;
	double Result (0);
	Result = (1.8*C)+32 ;
	cout << "Fahrenheit =" << Result << endl;
	cout << "Now Weather in Thailand is " << ((Result>70)? "HOT" : "COOL")<<endl;
	return(0);
}