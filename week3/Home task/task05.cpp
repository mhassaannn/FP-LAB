#include<iostream>
using namespace std;

main()

{
	cout << "Enter the Name of the Person: ";
	string name;
	cin>>name;

	cout << "Enter the target weight loss in kilograms: ";
	int weightlossinkg;
	cin>>weightlossinkg;

	int daysrequired;
	daysrequired=weightlossinkg*15;

	cout << name << " will need " << daysrequired << " to lose " << weightlossinkg<< "kg of weight by following the doctor's suggestions";

}