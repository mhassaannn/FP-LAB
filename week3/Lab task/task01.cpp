#include<iostream>
using namespace std;

main()

{
	cout << "Enter your name :";
	string name;
	cin>>name;

	cout << "Enter your Roll Number :";
	int number;
	cin>> number;

	cout << "Enter your Aggregate :";
	float agg;
	cin>>agg;

	cout << "Enter your Section :";
	char section;
	cin>>section;

	cout << "-------- STUDENT INFO ----------"<<endl;
	cout << "Name :" << name <<endl;
	cout << "Roll no. " << number <<endl;
	cout << "Aggregate :" << agg <<endl;
	cout << "Section :" << section <<endl;
}