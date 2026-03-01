#include<iostream>
using namespace std;

main()

{
	cout << "Enter the student's name: ";
	string chr;
	cin>>chr;

	cout << "Enter matriculation marks (out of 1100): ";
	float matric;
	cin>>matric;

	cout << "Enter Intermediate marks (out of 550): ";
	float inter;
	cin>>inter;

	cout << "Enter ECAT marks (out of 400): ";
	float ECAT;
	cin>>ECAT;

	float aggregate;
	aggregate = ((ECAT/400 * 0.50)+(inter/550 * 0.40)+(matric/1100 * 0.10)) * 100;

	cout << "Aggregate score of " << chr << " is " << aggregate << "%";
}
