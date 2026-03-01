#include<iostream>
using namespace std;

main()

{
	cout << "Number of square meters you can paint: ";
	int squaremeter;
	cin>>squaremeter;

	cout << "Width of the single wall (in meters): ";
	int width;
	cin>>width;

	cout << "Height of the single wall (in meters): ";
	int height;
	cin>>height;

	int formula;
	formula=squaremeter/(width*height);
	
	cout << "Number of walls you can paint: "<<formula ;
}