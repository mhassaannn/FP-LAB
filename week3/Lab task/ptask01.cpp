#include<iostream>
using namespace std;

main()

{
	cout << "Enter your sides of polygon : ";
	int sides ;
	cin>>sides;
	int angle;
	angle = (sides - 2) * 180 ;
	cout << "your given angle is " << angle;
}