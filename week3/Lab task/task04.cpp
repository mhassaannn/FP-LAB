#include<iostream>
using namespace std;

main()

{
	cout << "Enter the charge (Q) in Coulombs: ";
	float q;
	cin>>q;

	cout << "Enter the time (t) in seconds: ";
	float t;
	cin>>t;
	
	float current;
	current = q/t;

	cout << "The current (I) is = " <<current << " Amperes";
}