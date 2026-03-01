#include<iostream>
using namespace std;

main()

{
	cout << "Enter the size in megabytes(MB): ";
	int MB;
	cin>>MB;

	float bits;
	bits = MB*1024*1024*8;

	cout << MB << "MB is equivalent to " << bits << "bits";
}