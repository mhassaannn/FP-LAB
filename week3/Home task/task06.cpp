#include<iostream>
using namespace std;

main()

{
	cout << "Enter the size of the fertilizer bag in pounds: ";
	int fertilizer;
	cin>>fertilizer;

	cout << "Enter the cost of the bag: $";
	float cost;
	cin>>cost;

	cout << "Enter the area in square feet that bag covers: ";
	int area;
	cin>>area;

	float costpersquarefoot;
	costpersquarefoot=cost/area;

	float costperpound;
	costperpound=cost/fertilizer;

	cout << "Cost of fertilizer per pound is: $" <<costperpound <<endl;
	cout << "Cost of fertilizer per square foot is: $" <<costpersquarefoot;
}