#include<iostream>
using namespace std;

main()

{
	cout << "Enter your age in years: ";
	int age;
	cin>>age;

	int days;
	days = age*365;

	cout << "Your agr in days is approximately " <<days<< " days";
}