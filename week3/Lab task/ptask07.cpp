#include<iostream>
using namespace std;

main()

{
	cout << "Enter paint area: ";
	int paint;
	cin>>paint;

	cout << "Enter width: ";
	int width;
	cin>>width;

	cout << "Enter height:";
	int height;
	cin>>height;

	int formula;
	formula=paint/(width*height);

	cout << "Walls painted: " <<formula;
}