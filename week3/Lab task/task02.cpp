#include<iostream>
using namespace std;

main()

{
	cout << "Enter weight in pounds : ";
	int pounds;
	cin>>pounds;

	float weight;
	weight = pounds*0.45;
	cout << pounds << " is equal to " << weight << " kilograms"; 
}