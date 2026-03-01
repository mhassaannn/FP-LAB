#include<iostream>
using namespace std;

main()

{
	cout << "Enter the number of wins: ";
	int wins;
	cin>>wins;
	int p1;
	p1 = wins*3;

	cout << "Enter the number of draws: ";
	int draws;
	cin>>draws;
	int p2;
	p2 = draws*1;

	cout << "Enter the number of losses: ";
	int losses;
	cin>>losses;
	int p3;
	p3 = losses*0;

	int total_point;
	total_point = p1+p2+p3;

	cout << "Pakistan has obtained " << total_point << " points in Asia Cup Tournament";
}