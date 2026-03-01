#include<iostream>
using namespace std;

main()

{
	cout << "Enter the current world population: ";
	int pop;
	cin>>pop;

	cout << "Enter the monthly birth rate(number of births per month): ";
	int birth;
	cin>>birth;

	int months;
	months = 30*12;

	int increase;
	increase = birth*months;

	int decades;
	decades = pop+increase;

	cout << "population in three decades will be: " <<decades;
}