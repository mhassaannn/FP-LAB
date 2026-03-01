#include<iostream>
using namespace std;

main()

{
	cout << "Enter the number of hours: ";
	int time;
	cin>>time;

	int second;
	second = time*3600;

	cout << time << " is equivalent to " << second << " seconds";
}