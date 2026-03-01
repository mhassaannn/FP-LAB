#include<iostream>
using namespace std;

main()

{
	cout << "Enter Voltage (in volts): ";
	float volts;
	cin>>volts;

	cout << "Enter Current (in Amperes): ";
	float current;
	cin>>current;

	float power;
	power = volts*current;

	cout << "The Power is " <<power<< " Watts"; 
}